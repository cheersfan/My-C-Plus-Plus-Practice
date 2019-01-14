//
// Created by root on 1/10/19.
//

#include "execve.h"
#include <unistd.h>

void my_execve_main(){
    char * argv[] = {"/usr/lib/nqs", (char*)0};
    char * envp[] = {0};
    execve("/usr/lib/nqs/test-execve",argv,envp);
}
