#include<iostream>
#include<algorithm>
using namespace std;
void AdjustDown(int arr[], int len, int root)
{
	int i = 2 * root + 1;
	if (i >= len)
		return;
	int j = 2 * root + 2;
	int m = i;
	if ( j < len && arr[m] < arr[j])
		m = j;
	if (arr[m] > arr[root])
	{
		swap(arr[m], arr[root]);
		AdjustDown(arr, len, m);
	}
}
void CreateHeap(int arr[], int len)
{
	for (int i = (len - 2) / 2; i >= 0; i--)
	{
		AdjustDown(arr, len, i);
	}
}
void HeapSort(int arr[], int len)
{
	CreateHeap(arr, len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < len; i++)
	{
		swap(arr[len-i-1], arr[0]);
		AdjustDown(arr, len - i - 1, 0);
	}
}
int main()
{
	int arr[] = {0,21,32,43,543,2,432,321,432,432,543};
	int len = sizeof(arr) / sizeof(int);
	HeapSort(arr, len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}