#include <iostream>
#include <stout/flags/flags.hpp>


using namespace std;

class MongoFlags: public flags::FlagsBase
{
public:
  MongoFlags();

  Option<string> master;
  Option<string> config;
  string role;
  bool test;
};

MongoFlags::MongoFlags()
{
  add(&MongoFlags::master, "master", "The host address of the Mesos Master.");
  add(&MongoFlags::config, "config", "The location of the configuration file,"
      " on the Worker node (this file MUST exist).");
  add(&MongoFlags::role, "role", "The role for the executor", "*");
  add(&MongoFlags::test, "test", "Will only run unit tests and exit.", false);
}

void printUsage(const string& prog, const MongoFlags& flags)
{
  cout << "Usage: " << os::basename(prog).get() << " [options]\n\n"
      "One (and only one) of the following options MUST be present.\n\n"
      "Options:\n" << flags.usage() << endl;
}


int main(int argc, char** argv){
	cout << "hello world" << endl;
	 MongoFlags flags;
	  bool help;

	  // flags can be also added outside the Flags class:
	  flags.add(&help, "help", "Prints this help message", false);

	  Try<Nothing> load = flags.load(None(), argc, argv);

	  if (load.isError()) {
	    std::cerr << "Failed to load flags: " << load.error() << std::endl;
	    return -1;
	  }

	  if (!help) {
	    if (flags.test) {
	      cout << "Running unit tests for Playground App\n";
	      return test(argc, argv);
	    }
	    if (flags.config.isSome()) {
	      return run_executor(flags.config.get());
	    }

	    if (flags.master.isSome()) {
	      string uri = os::realpath(argv[0]).get();
	      auto masterIp = flags.master.get();
	      cout << "MongoExecutor starting - launching Scheduler rev. "
	           << MongoScheduler::REV << " starting Executor at: " << uri << '\n';
	      return run_scheduler(uri, masterIp);
	    }
	  }
	  printUsage(argv[0], flags);
	return 0;
}
