#include <stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{
    int ret=fork();
    if(ret>0)
    {
        printf("father:%d\n",getpid());
        printf("father wait child end\n");
        //pid_t pid=wait(&ret);
        //pid_t pid=waitpid(ret,NULL,0);
       // pid_t pid=waitpid(-1,NULL,0);
        pid_t pid=waitpid(-1,NULL,WNOHANG);
        printf("wait %d\n",pid);
        printf("father end\n");
    }
    else if(ret==0)
    {
        sleep(5);
        printf("child:%d\n",getpid());
        printf("child end\n");
    }
    else
    {
        perror("fork");
    }
    return 0;
}

