#include <stdio.h>
#include<unistd.h>
int main()
{
    int ret=fork();
    int cout=5;
    if(ret>0)
    {
        while(cout)
        {
            printf("father:%d %d\n",getpid(),getppid()); 
            cout--;
            sleep(1);
        }
    }
    else if(ret==0)
    {
        while(1)
        {
             printf("child:%d %d\n",getpid(),getppid());
             sleep(1);
        }
    }
    else
    {
        perror("forc");
    }
    return 0;
}

