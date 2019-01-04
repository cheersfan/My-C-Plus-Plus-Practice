//
// Created by root on 1/3/19.
//

#ifndef LINUX_C_EXERCISECODE_PIPE_COMMUNICATION_H
#define LINUX_C_EXERCISECODE_PIPE_COMMUNICATION_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

const int buf_size = 4096;

void my_pipe_communication_main();

//Read data from stream
void Read(FILE * stream);
//Write msg to stream count times
void Write(const char * msg, int count, FILE * stream);
#endif //LINUX_C_EXERCISECODE_PIPE_COMMUNICATION_H
