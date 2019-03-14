//
// Created by root on 11/29/18.
//

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>

//static void sig_usr(int signum)
//{
//    if(signum == SIGINT)
//    {
//        printf("SIGINT received\n");
//    }
//    else if(signum == SIGUSR2)
//    {
//        printf("SIGUSR2 received\n");
//    }
//    else
//    {
//        printf("signal %d received\n", signum);
//    }
//}

//int main(void)
//{
//    char buf[512];
//    int  n;
//    struct sigaction sa_usr;
//    sa_usr.sa_flags = 0;
//    sa_usr.sa_handler = sig_usr;   //信号处理函数
//
//    //sigaction(SIGINT, &sa_usr, NULL);
//    sigaction(SIGUSR2, &sa_usr, NULL);
//
//    printf("My PID is %d\n", getpid());
//
//    while(1)
//    {
//        if((n = read(STDIN_FILENO, buf, 511)) == -1)
//        {
//            if(errno == EINTR)
//            {
//                printf("read is interrupted by signal\n");
//            }
//        }
//        else
//        {
//            buf[n] = '\0';
//            printf("%d bytes read: %s\n", n, buf);
//        }
//    }
//
//    return 0;
//}

// #include <signal.h>
// #include <stdio.h>
// #include <unistd.h>
//
// void ouch(int sig)
// {
//     printf("I got signal %d\n", sig);
//     // (void) signal(SIGINT, SIG_DFL);
//     //(void) signal(SIGINT, ouch);
//
// }
//
//
//
// int main()
// {
//     (void) signal(SIGINT, ouch);
//
//     while(1)
//     {
//         printf("hello world...\n");
//         sleep(1);
//    }
// }