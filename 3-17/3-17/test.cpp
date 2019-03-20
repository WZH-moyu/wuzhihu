#include<iostream>
#include<stdlib.h>
using namespace std;
//class Seqlist
//{
//public:
//	void PushBack(int x)
//	{
//		++_size;
//	}
//private:
//	int *_a;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	Seqlist s;
//	s.PushBack(1);
//	return 0;
//}
//class Date
//{
//public:
//	void Func()
//	{
//		cout << "Date::Func()" << endl;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.SetDate(2018, 10, 20);
//	d2.SetDate(2018, 10, 21);
//	d1.Print();
//	d2.Print();
//	Date *p1 = &d1;
//	Date *p1 = NULL;
//	p1->Func();
//	Date *p2 = NULL;
//	p2->Print();
//	p1->Print();
//	system("pause");
//	return 0;
//}
//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//	~Time()
//	{
//		cout << "~Time()" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	Date()//Date的构造函数
//	{
//		_year=1900;
//		_month=1;
//		_day=1;
//	}
//	Date(int year, int month, int day)//Date的构造函数重载
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//	Date(const Date &d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void Func()
//	{
//		cout << "Date::Func()" << endl;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//	//基本类型：int/char
//	//自定义类型：class/struct定义的类型
//};
//int main()
//{
//	Date d1;
//	d1.Print();
//	Date d2(2018, 1, 1);
//	d2.Print();
//	Date d3(d2);
//	d3.Print();
//	system("pause");
//	return 0;
//}
//class Date{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
	/*bool operator==(const Date& d2)
	{
		return this->_year == d2._year
			&& this->_month == d2._month
			&& this->_day == d2._day;
	}
	bool Equal(const Date& d2)
	{
		return(this->_year == d2._year&&this->_month == d2._month&&this->_day == d2._day);
	}
*/
//		void Print()
//		{
//			cout << _year << "-" << _month << "-" << _day << endl;
//		}
//		Date(const Date&d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		Date& operator=(const Date& d)
//		{
//			if (this != &d)//防止自己赋值给自己
//			{
//				_year = d._year;
//				_month = d._month;
//				_day = d._day;
//			}
//			return *this;
//		}
//private:
//		int _year;
//		int _month;
//		int _day;
//};
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//bool Equal(const Date& d1, const Date& d2)
//{
//	return(d1._year == d2._year&&d1._month == d2._month&&d1._day == d2._day);
//}

//int main()
//{
//	Date d1(2018,1,1);
//	Date d2(2018, 1, 2);
//	Date d3(d1);
//	d2 = d1;
//	d2.Print();
//	d2 = d2;
//	d2.Print();
//	d3 = d2 = d1;//d3=d2.operator(&d2,d1)
//	d1.Print();
//	d2.Print();
//	d3.Print();
//	/*cout << d1.Equal(d2) << endl;
//	cout << d1.operator==(d2) << endl;
//	cout << (d1 == d2) << endl;*/
//	system("pause");
//	return 0;
//
//}