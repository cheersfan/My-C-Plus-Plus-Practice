//
// Created by root on 2/15/19.
//
#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include "signal-test.h"

using namespace std;

sig_atomic_t sigusr1_count = 0;

//`extern C` tell compiler this code compile as C language
extern "C"{
    void OnSigUsr1(int signal_number){
        ++ sigusr1_count;
    }
}

void my_signaltest_main(){
    cout << "pid:" << (int)getpid() << endl;
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = &OnSigUsr1;
    sigaction(SIGUSR1, &sa, NULL);
    sleep(100);
    //input `kill -s SIGUSR1 pid` in terminal, and look what will happen
    //kill 命令通常用来 “杀死”（终止）进程，它可以用来终止运行不正常的程序或者反过来拒绝终止的程序。
    //kill 命令准确地说并不是 “杀死” 进程，而是给进程发送信号（signal）。
    cout << "SIGUSR1 counts:" << sigusr1_count << endl;

}