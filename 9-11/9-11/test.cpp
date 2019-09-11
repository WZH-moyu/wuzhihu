#include<iostream>
#include<vector>
using namespace std;
//void insertSort(int arr[], int sz)
//{
//	int j = 0;
//	int ret;
//	for (int i = 1; i <= sz; i++)
//	{
//		ret = arr[i];
//		j = i - 1;
//		while (j >= 0&&arr[j]>ret)
//		{ 
//				arr[j+1] = arr[j];
//				j--;
//		}
//		arr[j + 1] = ret;
//	}
//}
//int partion(int arr[], int left, int right)
//{
//	int key = left;
//	int i = left, j = right;
//	while (i < j)
//	{
//		while (i < j && arr[i] < arr[key])
//		{
//			i++;
//		}
//		while (i < j && arr[j] >= arr[key])
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			int ret = arr[i];
//			arr[i] = arr[j];
//			arr[j] = ret;
//		}
//	}
//	int num = arr[i];
//	arr[i] = arr[key];
//	arr[key] = num;
//	return i;
//}
//void quickSort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int div = partion(arr, left, right);
//		quickSort(arr, left, div);
//		quickSort(arr, div + 1, right);
//	}
//}
//void bubbleSort(int arr[], int sz)
//{
//	for (int i = 1; i <= sz; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (arr[j] <=arr[j - 1])
//			{
//				int ret = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = ret;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,43,4,3,5,6,7,3,2,4,5,6,7,6,23,2,34,43,2,3,54,23,543,24 };
//	int sz = sizeof(arr) / 4 - 1;
//	//insertSort(arr, sz);
//	//quickSort(arr, 0, sz);
//	bubbleSort(arr, sz);
//	for (int i = 0; i <= sz; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}