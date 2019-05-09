#include <stdio.h>
#include<unistd.h>
int main()
{
    int ret = fork();
    int cout = 5;
    if(ret>0)
    {
        while(1)
        {
            printf("father:%d\n",getpid());
            sleep(1);
        }
    }
    else if(ret==0)
    {
        while(cout)
        {
            printf("child:%d\n",getpid());
            sleep(1);
            cout--;
        }
    }
    else
    {
        perror("fork");
    }
    return 0;
}

