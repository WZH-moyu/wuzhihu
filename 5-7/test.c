#include <stdio.h>
/*void BubbleSort(int arr[],int sz)
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
}*/
int QuickSort(int arr[],int start,int end)
{
    if(start>=end)
        return 0;
    int i=start;
    int j=end;
    int tmp=arr[start];
    while(i<j)
    {
        while(i<j && arr[j]>=tmp)
            j--;
        if(i<j)
            arr[i]=arr[j];
        while(i<j && arr[i]<tmp)
            i++;
        if(i<j)
            arr[j]=arr[i];
    }
    arr[i]=tmp;
    QuickSort(arr,start,i-1);
    QuickSort(arr,i+1,end);
}
int main()
{
    int arr[]={9,6,4,3,31,54,77,9,35,7,9,564,3,42,65,432,24,42,54,24,446,543};
    int sz=sizeof(arr)/sizeof(int);
    int i=0;
  //  BubbleSort(arr,sz);
    QuickSort(arr,0,sz-1);
    for(i=0;i<sz;i++)
    {
        printf("%4d",arr[i]);
    }
    printf("\n");
    return 0;
}

