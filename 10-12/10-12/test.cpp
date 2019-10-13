#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<mutex>
using namespace std;
//void SelectSort(int arr[], int sz)
//{
//	int min = 0, i = 0, j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		min = i;
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[min] > arr[j])
//				min = j;
//		}
//		if (min != i)
//			swap(arr[i], arr[min]);
//	}
//}
//void InsertSort(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	int ret = 0;
//	for (int i = 1; i < sz; i++)
//	{
//		ret = arr[i];
//		j = i - 1;
//		while (j >= 0 && arr[j] > ret)
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = ret;
//	}
//}
//void BubbleSort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//				swap(arr[j], arr[j + 1]);
//		}
//	}
//}
//int partion(int arr[], int left, int right)
//{
//	int i = left, j = right;
//	int key = left;
//	while (i < j)
//	{
//		while (i < j && arr[i] < arr[key])
//			i++;
//		while (i < j && arr[j] >= arr[key])
//			j--;
//		if (i < j)
//			swap(arr[i], arr[j]);
//	}
//	swap(arr[i], arr[key]);
//	return i;
//}
//void QuickSort(int arr[], int left,int right)
//{
//	if (left < right)
//	{
//		int div = partion(arr, left, right);
//		QuickSort(arr, left, div);
//		QuickSort(arr, div + 1, right);
//	}
//}
//void AdjustDown(int arr[], int sz, int root)
//{
//	int i = 2 * root + 1;
//	if (i >= sz)
//		return;
//	int j = 2 * root + 2;
//	int m = i;
//	if (j<sz && arr[j]>arr[m])
//		m = j;
//	if (arr[m] > arr[root])
//	{
//		swap(arr[m], arr[root]);
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
//		swap(arr[0], arr[sz - i - 1]);
//		AdjustDown(arr, sz - i - 1, 0);
//	}
//}
//int main()
//{
//	int array[] = { 2,3,1,4,5,3,6,8,5,8,0,7,6,5 };
//	int sz = sizeof(array) / sizeof(int);
//	//SelectSort(array, sz);
//	//InsertSort(array, sz);
//	//BubbleSort(array, sz);
//	//QuickSort(array, 0, sz - 1);
//	HeapSort(array, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//class Singleton
//{
//public:
//	static Singleton* GetIntance()
//	{
//		if (a == nullptr)
//		{
//			_mutex.lock();
//			if (a == nullptr)
//			{
//				a = new Singleton;
//			}
//			_mutex.unlock();
//		}
//		return a;
//	}
//	class Garbage
//	{
//	public:
//		Garbage()
//		{
//			if (Singleton::a != nullptr)
//				delete Singleton::a;
//		}
//	};
//	static Garbage gg;
//private:
//	static Singleton* a;
//	static mutex _mutex;
//	Singleton(){}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//};
//Singleton* Singleton::a = nullptr;
//mutex Singleton::_mutex;
//Singleton::Garbage gg;
//class Singleton
//{
//public:
//	static Singleton* GetIntance()
//	{
//		return &a;
//	}
//private:
//	static Singleton a;
//	Singleton(){}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//};
//Singleton Singleton::a;
