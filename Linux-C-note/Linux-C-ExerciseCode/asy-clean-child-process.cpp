//
// Created by root on 2/16/19.
//

#include "asy-clean-child-process.h"
#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <iostream>
using namespace std;


sig_atomic_t child_exit_status;
extern "C"{
    void CleanUp(int sig_num){
        cout << "inside CleanUp function" << endl;
        int status;
        wait(&status);
        child_exit_status = status;
        cout << "CleanUp function done!" << endl;
    }
}

void my_asycleanchildprocess_main(){

    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = &CleanUp;
    sigaction(SIGCHLD, &sa, NULL);

    pid_t child_pid = fork();
    if(child_pid == 0){
        cout << "inside child process" << endl;
        cout << "child process done!" << endl;
    }else{
        cout << "inside parent process" << endl;
        cout << "parent process done!" << endl;
    }
}