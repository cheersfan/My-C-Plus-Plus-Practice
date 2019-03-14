#include <iostream>
//#include "pipe-communication.h"
//#include "pipe-dup.h"
//#include "read-write.h"
//#include "execve.h"
//#include "signal-test.h"
//#include "create-process-test.h"
#include "asy-clean-child-process.h"
using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;
   // my_pipe_dup_main();
    //cout << sizeof(long) << endl;

    //my_read_write_main();
    //my_execve_main();
    //my_signaltest_main();
    //my_createprocess_main();
    my_asycleanchildprocess_main();
    return 0;
}