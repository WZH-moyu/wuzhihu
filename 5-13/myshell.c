#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
//#include<sstream>
//intput表示待切分命令
//output表示切分结果（字符串数组）
//返回值表示output中包含了几个有效元素
int Split(char input[],char* output[])
{
    int i=0;
    char* p=strtok(input," ");
    while(p!=NULL)
    {
       // printf("%s\n",p);
        output[i]=p;
        ++i;
        p=strtok(NULL," ");
    }
}
int main()
{
    while(1)
    {
        //1.打印提示符
        printf("[moyu@moyu ~]$ ");
        fflush(stdout);
        //2.用户输入一个指令
        char command[1024]={0};
        gets(command);
        //3.解析指令，把要执行哪个程序识别出来，
        //哪些命令是命令行参数识别出来（字符串切分）
        //切分结果应该是一个字符串
        char* argv[1024]={0};
        int n=Split(command,argv);
        //4.创建子进程并且做程序替换
        
    }
    return 0;
}

