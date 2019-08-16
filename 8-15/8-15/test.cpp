
#include<iostream>
#include<stdlib.h>
using namespace std;

void quickSort(int a[], int m, int n);

int partion(int a[], int m, int n);

int main()

{

	int a[] = { 6,1,2,7,9,3,4,5,10,8 };

	int m = 0;

	int n = (sizeof(a) / 4)-1;

	quickSort(a, m, n);

	for (int i = 0; i < 10; i++)

	{

		cout << a[i] << " ";

	}
	system("pause");

}
//void quickSort(int arr[], int start, int end)
//{
//	if(start<end)
//	{
//		int p = partion(arr, start, end);
//		partion(arr, start, p);
//		partion(arr, p + 1, end);
//	}
//}
//int partion(int arr[], int start, int end)
//{
//	int key = start;
//	int i = start;
//	int j = end;
//	while (i < j)
//	{
//		while (i < j && arr[j] >arr[key])
//			j--;
//		while (i < j && arr[i] < arr[key])
//			i++;
//		if (i < j)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//	int  num = arr[key];
//	arr[key] = arr[i];
//	arr[i] = num;
//	return i;
//}
//void quickSort(int a[], int m, int n)
//
//{
//
//	if (m < n)
//
//	{
//
//		int q = partion(a, m, n);
//
//		quickSort(a, m, q);
//
//		quickSort(a, q + 1, n);
//
//	}
//}
//int partion(int a[], int m, int n)
//
//{
//
//	int key = m;
//
//	int j = n, i = m;
//
//	int temp1, temp2;
//
//	while (i != j)
//
//	{
//
//		while (a[j] > a[key] && i < j)
//
//		{
//
//			--j;
//
//		}
//
//
//
//		while ((a[i] < a[key]) && (i < j))
//
//		{
//
//			++i;
//
//		}if (i < j)
//
//		{
//
//			temp1 = a[j];
//
//			a[j] = a[i];
//
//			a[i] = temp1;
//
//		}
//
//	}
//
//	temp2 = a[key];
//
//	a[key] = a[i];
//
//	a[i] = temp2;
//
//	return i;
//
//}
//void quickSort(int arr[], int start, int end)
//{
//	if (start < end)
//	{
//		int div = partion(arr, start, end);
//		quickSort(arr, start, div);
//		quickSort(arr, div+1, end);
//	}
//}
//int partion(int arr[], int start, int end)
//{
//	int i = start, j = end;
//	int key = start;
//	while (i < j)
//	{
//		while (i < j && arr[j] >= arr[key])
//			j--;
//		while (i < j && arr[i] < arr[key])
//			i--;
//		if (i < j)
//		{
//			int ret = arr[i];
//			arr[i] = arr[j];
//			arr[j] = ret;
//		}
//
//	}
//	int tmp = arr[i];
//	arr[i] = arr[key];
//	arr[key] = tmp;
//	return i;
//}
