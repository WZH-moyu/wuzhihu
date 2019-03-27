#include<iostream>
#include<stdlib.h>
using namespace  std;
//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	Swap(a, b);
//	system("pause");
//	return 0;
//}
//template<class T>
//void Swap(T& x1, T& x2)
//{
//	T tmp = x1;
//	x1=x2;
//	x2 = tmp;
//}
//int main()
//{
//	int a = 1, b = 2;
//	double c = 1.21, d = 2.11;
//	char e = '7', f = '9';
//	Swap(a, b);
//	swap(c, d);
//	swap(e, f);
//	cout << "a:" << a << "b:" << b << endl;
//	cout << "c:" << c << "d:" << d << endl;
//	cout << "e:" << e << "f:" << f << endl;
//	system("pause");
//	return 0;
//}
//template<class T>
//int  Add(const T& left,const T& right)
//{
//	return left + right;
//}
//template<class T>
//T*CreateOjb()
//{
//	return new T;
//}
//int main()
//{
//	int a1 = 2, b1 = 4;
//	double a2 = 2.11, b2 = 1.22;
//	Add(a1, b1);
//	Add(a2, b2);
//	Add<int>(a1, b2);
//	int *p = CreateOjb<int>();
//	system("pause");
//	return 0;
//}
//template<class T>
//class Vector
//{
//public:
//	Vector()
//		:_a(nullptr)
//		, _capacity(0)
//		, _size(0)
//	{
//
//	}
//	~Vector()
//	{
//		if (_a)
//		{
//			delete[] _a;
//			_size = _capacity = 0;
//		}
//	}
//	void PushBack(const T& x)
//	{
//		if (_size == _capacity)
//		{
//			size_t newcapacity =_capacity==0 ? 3:_capacity*2;//扩容不一定是按照2倍的容量增长，2倍是为了不频繁增容
//			T* tmp = new T[newcapacity];
//			if (_a)
//			{
//				memcpy(tmp, _a, sizeof(T)*_size);
//				delete[] _a;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//		}
//		_a[_size] = x;
//		_size++;
//	}
//	T& operator[](size_t pos)
//	{
//		return _a[pos];
//	}
//	size_t Size()
//	{
//		return _size;
//	}
//private:
//	T* _a;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	Vector<int> v1;
//	v1.PushBack(1);
//	v1.PushBack(2);
//	v1.PushBack(3);
//	v1.PushBack(4);
//	v1[0] = 10;
//	for (size_t i = 0; i < v1.Size(); ++i)
//	{
//		cout << v1[i] << " ";
////		cout << v1.operator[](i) << "";
//	}
//	cout << endl;
//	Vector<double>v2;
//	v2.PushBack(1.11);
//	v2.PushBack(2.22);
//	v2.PushBack(3.33);
//	v2.PushBack(4.44);
//	for (size_t i = 0; i < v2.Size(); ++i)
//	{
//		cout << v2[i] << " ";
//		//		cout << v1.operator[](i) << "";
//	}
//	cout << endl;
//	Vector<char>v3;
//	system("pause");
//	return 0;
//}