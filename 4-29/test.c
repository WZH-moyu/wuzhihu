#include <stdio.h>
#include <unistd.h>
int main()
{
    int i=0;
    char buf[1024]={0};
    const char* label="/-\\|";
    for(i=0;i<100;++i)
    {
        buf[i]='#';
        if(i<=25)
        {
            printf("[%d%%][%c]\033[0;31m[%s]\033[0m\r",i,label[i%4],buf);
        }
        else if(i>25&&i<=50)
        {
            printf("[%d%%][%c]\033[0;33m[%s]\033[0m\r",i,label[i%4],buf);
        }
        else if(i>50&&i<=75)
        {
            printf("[%d%%][%c]\033[0;34m[%s]\033[0m\r",i,label[i%4],buf);
        }
        else
        {
            printf("[%d%%][%c]\033[0;32m[%s]\033[0m\r",i,label[i%4],buf);
        }
        //\033[41;32m字背景颜色红色;字体颜色绿色\033[0m\n]]
        fflush(stdout);
        usleep(500*100);
    }
    return 0;
}

