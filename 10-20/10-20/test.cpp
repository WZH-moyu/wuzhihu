#include<iostream>
#include<stdlib.h>
using namespace std;
//int Add(int a, int b)
//{
//	return a + b;
//}
//double Add(double a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1.0, 2);
//	Add(2.0, 3.0);
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	virtual void Funtest1(int i)
//	{
//		cout << "Base::Funtest1()" << endl;
//	}
//	void Funtest2(int i)
//	{
//		cout << "Base::Funtest2()" << endl;
//	}
//};
//class Drived :public Base
//{
//	virtual void Funtest1(int i)
//	{
//		cout << "Drived::Fubtest1()" << endl;
//	}
//	virtual void Funtest2(int i)
//	{
//		cout << "Drived::Fubtest2()" << endl;
//	}
//	//void Funtest2(int i)
//	//{
//	//	cout << "Drived::Fubtest2()" << endl;
//	//}
//};
//void TestVirtual(Base& b)
//{
//	b.Funtest1(1);
//	b.Funtest2(2);
//}
//int main()
//{
//	Base b;
//	Drived d;
//	Base *p = &b;
//	p->Funtest1(1);
//	TestVirtual(b);
//	TestVirtual(d);
//	system("pause");
//	return 0;
//}
//int partion(int arr[], int left, int right)
//{
//	int key = left;
//	int first = left;
//	int end = right;
//	while (first < end)
//	{
//		while (first < end && arr[end] >= arr[key])
//			end--;
//		while (first < end && arr[first] < arr[key])
//			first++;
//		if (first < end)
//			swap(arr[first], arr[end]);
//	}
//	swap(arr[key], arr[first]);
//	return first;
//}
//void QuickSort(int arr[], int left, int right)
//{
//	if (left > right)
//		return;
//	else
//	{
//		int div = partion(arr, left, right);
//		QuickSort(arr, left, div - 1);
//		QuickSort(arr, div + 1, right);
//	}
//}
//int main()
//{
//	int arr[]{ 2,4,1,4,6,32,765,32,654,32,43,765 };
//	int sz = sizeof(arr) / sizeof(int);
//	QuickSort(arr, 0, sz - 1);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	virtual void Funtest1(int i)
//	{
//		cout << "Base::Funtest1()" << endl;
//	}
//	virtual void Funtest2(int i)
//	{
//		cout << "Base::Funtest2()" << endl;
//	}
//	int _data;
//};
//
//int main()
//{
//	cout << sizeof(Base) << endl;
//	Base b;
//	//b._data = 10;
//	system("pause");
//	return 0;
//}