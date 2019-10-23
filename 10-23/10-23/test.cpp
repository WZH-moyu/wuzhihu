#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
void AdjustDown(int arr[], int sz, int root)
{
	int i = 2 * root + 1;
	if (i >= sz)
		return;
	int j = 2 * root + 2;
	int m = i;
	if (j < sz && arr[j]>arr[m])
		m = j;
	if (arr[m] > arr[root])
	{
		swap(arr[root], arr[m]);
		AdjustDown(arr, sz, m);
	}
}
void CreateHeap(int arr[], int sz)
{
	for (int i = (sz - 2) / 2; i >= 0; i--)
	{
		AdjustDown(arr, sz, i);
	}
}
void HeapSort(int arr[], int sz)
{
	CreateHeap(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		swap(arr[0], arr[sz - i - 1]);
		AdjustDown(arr, sz - i - 1, 0);
	}
}
int main()
{
	int arr[] = { 32,324,435,432,654,234,0,6532,6,654,23,6442,423 };
	int sz = sizeof(arr) / sizeof(int);
	HeapSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}