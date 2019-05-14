#include <stdio.h>
#include<unistd.h>

int main()
{
    int ret = fork();
    if(ret>0)
    {
        printf("father:%d\n",getpid());
    }
    else if(ret==0)
    {
        printf("child:%d\n",getpid());
    }
    else
    {
        printf("perror fork()");
    }
    return 0;
}

