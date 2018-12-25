//
// Created by root on 12/25/18.
//

#include <iostream>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

#include "signal-function-test.h"

void my_ignore_signal_main(){
    //ctrl + c to stop the program doesn`t work!
    signal(SIGINT, SIG_IGN);
    while (1){
        printf("ignore SIGINT signal! Try `ctrl + c`\n");
        sleep(1);
    }
}

void my_default_signal_main(){
    signal(SIGINT, SIG_DFL);
    while (1){
        printf("Default SIGINT signal! Try `ctrl + c`\n");
        sleep(1);
    }
}

void my_defined_handler(int signum){
    printf("my_defined_handler_function. do something to handle the signal!");
}

void my_defined_signal_main(){
    signal(SIGINT, my_defined_handler);
    while (1){
        printf("Default SIGINT signal! Try `ctrl + c`\n");
        sleep(1);
    }
}

