#include <stdio.h>
#include<unistd.h>
#include<sys/wait.h>
//int main()
//{
//    printf("Hello word");
//    _exit(0);
//    
//}
int main()
{
    int status=0;
    int ret=fork();
    if(ret>0)
    {
        printf("father:\n");
    }
    else if(ret==0)
    {
        printf("child:\n");
    }
    else
    {
        perror("fork");
    }
    pid_t result =wait(NULL);
    printf("result:%d\n",result);
    return 0;
}

