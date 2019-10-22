#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;
vector<string> v;
//vector<string> * fun(string& s)
//{
//	string::iterator iter;
//	iter = s.begin();
//	while (iter < s.end())
//	{
//		int ret = 0;
//		ret = *iter - '\0';
//		if (ret % 2 == 0)
//			s.erase(iter);
//		else
//			iter++;
//	}
//	v.resize(s.size());
//	for (int i = 0; i < s.size(); i++)
//	{
//		v[i] = s[i];
//	}
//	vector<string>* t = &v;
//	return t;
//}
//int main()
//{
//	string s;
//	cin >> s;
//	vector<string>* t= fun(s);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i];
//	}
//	system("pause");
//	return 0;
//}
//class Shape
//{
//public:
//	virtual double area()const = 0;
//};
//class Square :public Shape
//{
//public:
//	Square(double a)
//	{
//		_a = a;
//	}
//	virtual double area()const
//	{
//		return _a * _a;
//	}
//	double _a;
//};
//class Trapezoid :public Shape
//{
//public:
//	Trapezoid(double a, double b, double h)
//	{
//		_a = a;
//		_b = b;
//		_h = h;
//	}
//	virtual double area()const
//	{
//		return (_a + _b)*_h / 2;
//	}
//	double _a;
//	double _b;
//	double _h;
//};
//class Triangle :public Shape
//{
//public:
//	Triangle(double a,double h)
//	{
//		_a = a;
//		_h = h;
//	}
//	virtual double area()const
//	{
//		return _a * _h / 2;
//	}
//	double _a;
//	double _h;
//};
//int main()
//{
//	Shape* arr[3];
//	Square b(3.0);
//	Trapezoid c(2.0, 5.0, 4.0);
//	Triangle d(6.0, 5.0);
//	arr[0] = &b;
//	arr[1] = &c;
//	arr[2] = &d;
//	double sum = arr[0]->area() + arr[1]->area() + arr[2]->area();
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}