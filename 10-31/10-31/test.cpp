#include<iostream>
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