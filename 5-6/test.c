#include <stdio.h>

/*void Swap(int* a,int* b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}*/
void BubbleSort(int arr[],int sz)
{
    int i=0,j=0;
    for(i=sz-1;i>0;i--)
    {
        int flag=1;
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;
            }

        }
        if(flag)
        {
            break;
        }
    }
}
int main()
{
    int arr[]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,0,0};
    int sz=sizeof(arr)/sizeof(int);
    BubbleSort(arr,sz);
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%4d",arr[i]);
    }
    printf("\n");
    return 0;
}

