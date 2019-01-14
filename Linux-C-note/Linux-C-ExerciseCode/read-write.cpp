//
// Created by root on 1/7/19.
//

#include "read-write.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <cstring>

void my_read_write_main(){

    //open the file before read and write!
    printf("open the file\n");
    int fd;
    fd = open("/root/linux_file_RW",O_RDWR);
    if(fd == -1){
        printf("can not open this file \n");
    }else{
        printf("file descriptors: %d\n",fd);
    }

    //read this file
    printf("read the file \n");
    int rd;
    char buf[512];

    rd = read(fd, buf, 4096);
    if(rd == -1){
        printf("read failed!\n");
    }else{
        printf("the data is : %s \n",buf);
    }

    //write: add some thing at the end of the file
    printf("write: add something at the end of the file\n");
    int wt;
    const char * buf_w = "Write something at the end of the file.";
    wt = write(fd, buf_w, strlen(buf_w));
    if(wt == -1){
        printf("write failed!\n");
    }else{
        printf("write success:%d\n",wt);
    }

    //the third parameter for lseek(int fd, off_t pos, int origin)
    printf("SEEK_CUR:%d\n",SEEK_CUR);
    printf("SEEK_END:%d\n",SEEK_END);
    printf("SEEK_SET:%d\n",SEEK_SET);
}
