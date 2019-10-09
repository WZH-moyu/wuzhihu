//#include<iostream>
//#include<algorithm>
//#include<stdlib.h>
////void AdjustDown(int arr[], int sz, int root)
////{
////	int i = 2 * root + 1;
////	if (i >= sz)
////		return;
////	int j = 2 * root + 2;
////	int m = i;
////	if (j<sz && arr[m]<arr[j])
////		m = j;
////	if (arr[root] < arr[m])
////	{
////		std::swap(arr[root], arr[m]);
////		AdjustDown(arr, sz, m);
////	}
////}
////void CreateHeap(int arr[], int sz)
////{
////	for (int i = (sz - 2) / 2; i >= 0; i--)
////	{
////		AdjustDown(arr, sz, i);
////	}
////}
////void HeapSort(int arr[], int sz)
////{
////	CreateHeap(arr, sz);
////	for (int i = 0; i < sz; i++)
////	{
////		std::swap(arr[0], arr[sz - i - 1]);
////		AdjustDown(arr, sz - i - 1, 0);
////	}
////}
//void AdjustDown(int arr[], int sz, int root)
//{
//	int i = 2 * root + 1;
//	if (i >= sz)
//		return;
//	int j = 2 * root + 2;
//	int m = i;
//	if (j < sz && arr[m] < arr[j])
//		m = j;
//	if (arr[root] < arr[m])
//	{
//		std::swap(arr[root], arr[m]);
//		AdjustDown(arr, sz, m);
//	}
//}
//void CreateHeap(int arr[], int sz)
//{
//	for (int i = (sz - 2) / 2; i >= 0; i--)
//	{
//		AdjustDown(arr, sz, i);
//	}
//}
//void HeapSort(int arr[], int sz)
//{
//	CreateHeap(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		std::swap(arr[0], arr[sz - i - 1]);
//		AdjustDown(arr, sz - i - 1, 0);
//	}
//}
//int main()
//{
//	int arr[] = { 23,31,32,45,54,65,67,76,53,87,58,98,103 };
//	int sz = sizeof(arr) / sizeof(int);
//	HeapSort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << std::endl;
//	system("pause");
//	return 0;
//}