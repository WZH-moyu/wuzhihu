#include<iostream>
#include<queue>
#include<stdlib.h>
#include<pthread.h>

#define NUM 8

class BlockQueue{
  private:
    std::queue<int> q;
    int cap;
    pthread_mutex_t lock;
    pthread_cond_t full;
    pthread_cond_t empty;

  private:
    void LockQueue()
    {
      pthread_mutex_lock(&lock);
    }
    void UnliockQueue()
    {
      pthread_mutex_unlock(&lock);
    }
    void ProductWait()
    {
      pthread_cond_wait(&full,&lock);
    }
    void ConsumeWait()
    {
      pthread_cond_wait(&empty,&lock);
    }
    void NotifyProduct()
    {
      pthread_cond_signal(&full);
    }
    void NotifyConsume()
    {
      pthread_cond_signal(&empty);
    }
    bool IsEmpty()
    {
      return (q.size()==0 ? true:false);
    }
    bool IsFull()
    {
      return (q.size()== cap? true:false);
    }
  public:
    BlockQueue(int _cap = NUM):cap(_cap)
  {
    pthread_mutex_init(&lock,NULL);
    pthread_cond_init(&full,NULL);
    pthread_cond_init(&empty,NULL);
  }
    void PushData(const int &data)
    {
      LockQueue();
      while(IsFull()){
        NotifyConsume();
        std::cout<<"queue full,notfiy consume data,product stop."<<std::endl;
        ProductWait();
      }
      q.push(data);
      //NotifyConsume();
      UnliockQueue();
    }
    void PopData(int &data)
    {
      LockQueue();
      while(IsEmpty()){
        NotifyProduct();
        std::cout<<"queue empty,notify product data,comsume stop."<<std::endl;
        ConsumeWait();
      }
      data=q.front();
      q.pop();
      //NotifyPorduct();
      UnliockQueue();
    }
    ~BlockQueue()
    {
      pthread_mutex_destroy(&lock);
      pthread_cond_destroy(&full);
      pthread_cond_destroy(&empty);
    }
};
void *consumer(void *arg)
{
  BlockQueue *bdp=(BlockQueue*) arg;
  int data;
  for(;;){
    bdp->PopData(data);
    std::cout<<"Consume data done:"<<data<<std::endl;
  }
}
//more faster
void *producter(void *arg)
{
  BlockQueue *bqp=(BlockQueue*)arg;
  srand((unsigned long)time(NULL));
  for(;;){
    int data=rand()%1024;
    bqp->PushData(data);
    std::cout<<"Product data done:"<<data<<std::endl;
    //sleep(1);
  }
}
int main(){
  BlockQueue bq;
  pthread_t c,p;
  pthread_create(&c,NULL,consumer,(void*)&bq);
  pthread_create(&p,NULL,producter,(void*)&bq);

  pthread_join(c,NULL);
  pthread_join(p,NULL);
  return 0;
}
