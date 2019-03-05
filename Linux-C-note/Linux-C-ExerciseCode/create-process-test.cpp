//
// Created by root on 2/15/19.
//

#include "create-process-test.h"
#include <stdlib.h>

#include <sys/types.h>
#include <unistd.h>
#include <iostream>
using namespace std;

void my_createprocess_main(){
    //*******
    //use system() to create a process
    //*******
    //int ret_val = system("ls -la /");
    //cout << ret_val << endl;

    //*******
    //use fork() to create a new process which is inherit from the parent process
    //*******
    cout << "the parent peocess ID is:" << (int) getpid() << endl;
    pid_t child_pid = fork();
    if(child_pid != 0){
        cout << "this is the parent process, with id:" << (int)getpid() << endl;
        cout << "the child process ID is:" << (int)child_pid << endl;
    }else{
        cout << "this is the child process ,with id:" << (int)getpid() << endl;
    }

    //use exec() to execute something in the child process
    char* args[] = {"ls", "-la", "/", NULL};
    spwan("ls", args);
    cout << "Done! \n";
}

int spwan(char* program, char** args){
    pid_t child_pid = fork();
    if(child_pid != 0){
        return child_pid;
    }else{
        execvp(program, args);
        //when something bad happend, the execvp function will have returned value
        cerr << "Error occurred when executing execvp !\n";
        abort();
    }
}