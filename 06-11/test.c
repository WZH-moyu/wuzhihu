#include <stdio.h>
#include<unistd.h>
#include<pthread.h>
int count=0;
void pthreadEntry()
{
    sleep(1);
    ++count;
    printf("%d\n",count);
}
int main()
{
    int i=10000;
    pthread_t tid1,tid2;
    while(i>0)
    {
        pthread_create(&tid1,NULL,pthreadEntry,NULL);
        pthread_create(&tid2,NULL,pthreadEntry,NULL);
        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);
        --i;
    }
    return 0;
}

