//#include<fcntl.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/wait.h>
//#include<sys/types.h>
int Split(char input[],char* output[])
{
    int i=0;
    char* p=strtok(input," ");
    while(p!=NULL)
    {
        output[i]=p;
        ++i;
       // printf("%s\n",p);
        p=strtok(NULL," ");
    }
    output[i]=NULL;
    return i;
}
void CreateProcess(char* argv[],int n)
{
    (void)n;
    pid_t ret =fork();
    if(ret>0)
    {
        wait(NULL);
    }
    else if(ret==0)
    {
        ret=execvp(argv[0],argv);
        perror("exec");
        exit(0);
    }
    else
    {
        perror("fork");
    }
}
int main()
{
    while(1)
    {
        printf("[myshell@moyu]$ ");
        fflush(stdout);
        char command[1024]={0};
        gets(command);
        char* argv[1024]={0};
        int n=Split(command,argv);
        CreateProcess(argv,n);
    }
    return 0;
}

