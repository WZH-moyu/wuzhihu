#include<iostream>
#include<mutex>
#include<stdlib.h>
using namespace std;
////设置结构体的对齐数
//#pragma pack(16)
//typedef struct
//{
//	int a;
//	char c;
//	double b;
//}A;
////恢复对齐数为默认
//#pragma pack()
//int main()
//{
//	cout << sizeof(A) << endl;
//	system("pause");
//	return 0;
//}
//预处理指令
//#define //一般定义宏变量，宏函数
//#include//一般指头文件的包含:<>包含库文件，" "包含自定义的头文件
//#if #else #endif//条件编译
//#error //遇到跳出编译错误，使程序按照自己预期的编译
//#endif // #else #endif//条件编译
////单例模式之懒汉模式
//class Singleton
//{
//public:
//	volatile static Singleton* GetIncetance()
//	{
//		if (_a == nullptr)
//		{
//			_mutex.lock();
//			if (_a == nullptr)
//			{
//				_a = new Singleton();
//			}
//			_mutex.unlock();
//		}
//		return _a;
//	}
//	class Garbage
//	{
//		~Garbage()
//		{
//			if (Singleton::_a != nullptr)
//				delete Singleton::_a;
//		}
//	};
//	static Garbage ga;
//private:
//	Singleton(){}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	volatile static Singleton* _a;
//	static mutex _mutex;
//};
//Singleton::Garbage ga;
//volatile Singleton* Singleton::_a = nullptr;
//mutex Singleton::_mutex;
////单例模式之饿汉模式
//class Singleton
//{
//public:
//	static Singleton* GetIncetance()
//	{
//		return &_a;
//	}
//private:
//	Singleton(){}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	static Singleton _a;
//};
//Singleton Singleton::_a;
////单链表逆置
//class ListNode
//{
//public:
//	ListNode* next;
//	int data;
//};
//ListNode* ListNodeReverse(ListNode* Head)
//{
//	if (Head != nullptr && Head->next != nullptr)
//	{
//		ListNode* cur = Head;
//		ListNode* pre = nullptr;
//		while (cur != nullptr)
//		{
//			ListNode*p = cur;
//			cur = cur->next;
//			p->next = pre;
//			pre = p;
//		}
//		return pre;
//	}
//	else
//	{
//		return Head;
//	}
//}
//快速排序
//int partion(int arr[], int left, int right)
//{
//	int i = left, j = right;
//	int key = left;
//	while (i < j)
//	{
//		while (i < j && arr[j] >= arr[key])
//			j--;
//		while (i < j && arr[i] < arr[key])
//			i++;
//		if (i < j)
//			swap(arr[i], arr[j]);
//	}
//	swap(arr[i], arr[key]);
//	return i;
//}
//void QuickSort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int div = partion(arr, left, right);
//		QuickSort(arr, left, div - 1);
//		QuickSort(arr, div + 1, right);
//	}
//}