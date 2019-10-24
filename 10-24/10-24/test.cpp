#include<iostream>
#include<algorithm>
#include<mutex>
//using namespace std;
////¶ÑÅÅĞò
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
////Ñ¡ÔñÅÅĞò
//void SelectSort(int arr[], int sz)
//{
//	int min = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		min = i;
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (arr[j] < arr[min])
//				min = j;
//		}
//		if (min != i)
//			swap(arr[min], arr[i]);
//	}
//}
//²åÈëÅÅĞò
//void InsertSort(int arr[], int sz)
//{
//	for (int i = 1; i < sz; i++)
//	{
//		int j = i - 1;
//		int ret = arr[i];
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
//	for (int i = 0; i < sz ; i++)
//	{
//		for (int j = 0; j < sz - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//				swap(arr[j], arr[j + 1]);
//		}
//	}
//}
////¿ìËÙÅÅĞò
//int Partion(int arr[], int left, int right)
//{
//	int i = left, j = right, key = left;
//	while (i < j)
//	{
//		while (i < j && arr[i] < arr[key])
//			i++;
//		while (i < j && arr[j] >= arr[key])
//			j--;
//		swap(arr[i], arr[j]);
//	}
//	swap(arr[i], arr[key]);
//	return i;
//}
//void QuickSort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int div = Partion(arr, left, right);
//		QuickSort(arr, left, div - 1);
//		QuickSort(arr, div + 1, right);
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,2,4,6,432,7,21,54,21,56,32,45,131 };
//	int sz = sizeof(arr) / sizeof(int);
//	//HeapSort(arr, sz);
//	//SelectSort(arr, sz);
//	//InsertSort(arr, sz);
//	//BubbleSort(arr, sz);
//	QuickSort(arr, 0, sz - 1);
//	for (int i = 0; i < sz; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//	system("pause");
//	return 0;
//}
class Singleton
{
public:
	static Singleton* GetIntance()
	{
		if (a == NULL)
		{
			_mutex.lock();
			if (a == NULL)
			{
				a = new Singleton();
			}
			_mutex.unlock();
		}
		return a;
	}
	class Garbage
	{
	public:
		~Garbage()
		{
			if (Singleton::a != NULL)
				delete Singleton::a;
		}
	};
	static Garbage gg;
private:

	Singleton(){}
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	static Singleton* a;
	static std::mutex _mutex;
};
Singleton* Singleton::a = NULL;
std::mutex Singleton::_mutex;
Singleton::Garbage gg;
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
