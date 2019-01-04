//
// Created by root on 1/3/19.
//

#include "pipe-dup.h"
#include "pipe-dup.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

void my_pipe_dup_main(){
    int fds[2];
    pipe(fds);
    pid_t pid = fork();

    if(pid == (pid_t)0){                //subprocess write data
        close(fds[0]);
        dup2(fds[1], STDOUT_FILENO);    //dup the fds[1] to STDOUT_FILENO
        char* args[] = {"ls", "-la", "/root/Documents/", NULL};
        execvp(args[0], args);          //???
    }else{                              //parent process read data
        close(fds[1]);
        char buf[buf_size];
        FILE * stream = fdopen(fds[0], "r");
        fprintf(stdout, "Data receive:\n");
        while (!feof(stream) && !ferror(stream) && fgets(buf, sizeof(buf), stream) != NULL){
            fputs(buf, stdout);
        }
        close(0);
        waitpid(pid, NULL, 0);

    }
}