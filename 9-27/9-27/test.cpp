//#include<iostream>
#include<stdlib.h>
#include<mutex>
//using namespace std;
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
//		swap(arr[root], arr[m]);
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
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//				swap(arr[j], arr[j + 1]);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,4,2,4,1,3,5,6,7,8,0 };
//	int sz = sizeof(arr) / sizeof(int);
//	//HeapSort(arr, sz);
//	//InsertSort(arr, sz);
//	BubbleSort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//class Singlenton
//{
//private:
//	Singlenton() 
//	{};
//	Singlenton(const Singlenton &) =delete;
//	Singlenton& operator=(const Singlenton&) = delete;
//    static Singlenton * a;
//	static mutex _mutex;
//public:
//	static Singlenton* GenInstance()
//	{
//		if (a == nullptr)
//		{
//			_mutex.lock();
//			if (a == nullptr)
//			{
//				a = new Singlenton;
//			}
//			_mutex.unlock();
//		}
//		return a;
//	}
//};
//Singlenton* Singlenton::a = nullptr;
//mutex Singlenton::_mutex;
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (a == nullptr)
		{
			_mutex.lock();
			if (a == nullptr)
			{
				a = new Singleton;
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
			if (Singleton::a)
				delete Singleton::a;
		}
	};
	static Garbage ga;
private:
	Singleton() {};
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	static Singleton* a;
	static std::mutex _mutex;
};
Singleton::Garbage ga;
Singleton* Singleton::a = nullptr;
std::mutex Singleton::_mutex;
//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		return &a;
//	}
//private:
//	Singleton() {};
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	static Singleton a;
//};
//Singleton Singleton::a;
//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		return &a;
//	}
//private:
//	Singleton() {};
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	static Singleton a;
//};
//Singleton Singleton::a;