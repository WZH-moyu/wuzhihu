#include <stdio.h>
#include<unistd.h>
#include<sys/wait.h>
void process_create(pid_t* pid,void* func,void*argv)
{
    {
        if((*pid = fork()) == -1){
            perror("fork");
            return ;
                                
        }   
        if(*pid == 0){ 
            ((int (*)())func) (((char**)argv)[0],(char**)argv);
            perror("func");                 
        }
        else {
                int state;
                while( wait(&state) != *pid  );
        }
    }
}
int main()
{
    pid_t pid;
    char* argv[]={"ls","-l",NULL};
    process_create(&pid,execvp,argv);
    return 0;
}

