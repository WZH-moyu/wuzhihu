#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
//class A
//{
//public:
//	static int add(int a, int b)
//	{
//		static int c = 1;
//		return a + b + c;
//	}
//	virtual int fun(int arr[])
//	{
//		return arr[1];
//	}
//};
//class B:public A
//{
//public:
//	virtual int fun(int arr[])
//	{
//		return arr[2];
//	}
//	virtual int find(int arr[])
//	{
//		return arr[3];
//	}
//};
//int main()
//{
//	A* a = nullptr;
//	B b; 
//	a= &b;
//	int s=a->add(1, 2);
//	cout << s << endl;
//	s = a->add(1, 2);
//	cout << s << endl;
//	s = A::add(1, 2);
//	cout << s << endl;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	s = a->fun(arr);
//	cout << s << endl;
//	system("pause");
//	return 0;
//}
//链表的逆置
//template<class T>
//struct Listnode
//{
//	T* next;
//	T data;
//};
//template<class T>
//T* ListnodeReverse(T* head)
//{
//	if(head!=nullptr && head->next!=nullptr)
//	T* cur = head;
//	T* pre = nullptr;
//	while (cur != nullptr)
//	{
//		T* p = cur;
//		cur = cur->next;
//		p->next = pre;
//		pre = p;
//	}
//	return pre;
//}
//快速排序
//int partion(int arr[], int left, int right)
//{
//	int i = left, j = right;
//	int key = left;
//	while (i < j)
//	{
//		while (i < j && arr[key] <= arr[j])
//			j--;
//		while (i<j && arr[key]>arr[i])
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