//
// Created by root on 1/3/19.
//

#include "pipe-communication.h"
void my_pipe_communication_main(){
   int fds[2];          //in pipe, fds[0] is the signal for reading, fds[1] is the signal for writing
   pipe(fds);           //create pipe
   pid_t pid = fork();  //create subprocess

   if(pid == 0){        //if process is subprocess
       close(fds[1]);   //close write pipe
       FILE * stream = fdopen(fds[0], "r");
       Read(stream);
       close(fds[0]);
   }else if(pid > 0){   //if process is parent process
        char buf[buf_size];
        for(int i = 0; i < buf_size-2; i ++){
            buf[i] = 'A' + i % 26;
        }
        buf[buf_size-1] = buf[buf_size-2] = '\0';
        close(fds[0]);
        FILE * stream = fdopen(fds[1],"w");
        Write(buf, 3, stream);
        close(fds[1]);
   }
}

void Write(const char * msg, int count, FILE * stream){
    for(; count > 0; -- count){
        fprintf(stream, "%s\n", msg);
        fflush(stream);
        sleep(1);
    }
}

void Read(FILE * stream){
    char buf[buf_size];
    while (!feof(stream) && !ferror(stream) && fgets(buf, sizeof(buf),stream) != NULL){
        fprintf(stdout, "Data receive:\n");
        fputs(buf, stdout);
    }
}