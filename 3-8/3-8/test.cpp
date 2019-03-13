#include<iostream>
//const修饰成员函数
//void display() const//实际是void display(const Date* this)只能调用读取，不能修改
//普通对象可以调用const成员函数，const对象不能调用普通成员函数 
class Date {
public:  
	Date(int year = 1900, int month = 1, int day = 1)
	{
		if (year <= 0 || month > 12 || month < 1 || day<0 || day>getMonthDay(_year,_month)){
			std::cout << "非法日期！日期已设置为默认值：1900-1-1" << std::endl;
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
	}
	Date(const Date& d);    
	int getMonthDay(int year, int month)
	{
		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = days[month];
		if (month == 2){
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
				day += 1;
			}
		}
	}
	Date& operator+=(int day)
	{
		if (day<0){
			return*this -= _day;
		}
		_day += day;
		while (_day > getMonthDay(_year, _month))
		{
			_day -= getMonthDay(_year, _month);
			++_month;
			if (_month == 13){
				_month = 1;
				++_year;
			}
		}
		return *this;
	}
	Date& operator-=(int day)
	{
		if (day < 0){
			return *this += _day;
		}
		_day -= day;
		while (_day<=0)
		{
			--_month;
			if (_month == 0){
				_month = 12;
				--_year;
			}
			_day += getMonthDay(_year, _month);
		}
		return *this;
	}

	//Date& operator=(const Date& d);  
	Date operator+(int days)
	{
		Date ret(*this);
		ret += days;
		return ret;
	}
	Date operator-(int days)
	{
		Date ret(*this);
		ret -= days;
		return ret;
	}
	int operator-(const Date& d); 
	Date& operator++()
	{
		//++Date
		return *this += 1;
	}
	Date operator++(int)
	{
		//Date++ 先返回自加之前的值，在自加
		Date ret(*this);
		*this += 1;
		return ret;
	}
	Date& operator--()
	{
		//--Date；
		return *this-= 1;
	}
	Date operator--(int)
	{
		Date ret(*this);
		*this -= 1;
		return ret;
	}
	bool operator>(const Date& d)const
	{
		//*this>d?
		if (_year > d._year)
		{
			return true;
		}
		else if (_year== d._year)
		{
			if (_month > d._month)
			{
				return true;
			}
			else if(_month == d._month){
				if (_day > d._day)
					return true;
			}
		}
		return false;
	}
	bool operator>=(const Date& d)const
	{
		return (*this > d || *this == d);
	}
	bool operator<(const Date& d)const
	{
		return !(*this >= d);
	}
	bool operator<=(const Date& d)const
	{
		return (*this < d || *this == d);
	}
	bool operator==(const Date& d)const
	{
		return _year == d._year&&_month == d._month&&_day == d._day;
	}
	bool operator!=(const Date& d)const
	{
		return !(*this == d);
	}
	//*this-d
	int operator-(const Date& d)
	{
		Date ret(*this);
		int flag = 1;
		if (ret < d)
			flag = -1;
		int day = 0;
		if (ret < d)
		{
			while (ret < d)
			{
				++ret;
				++day;
			}
		}
		else
		{
			while (ret>d)
			{
				--ret;
				--day;
			}
		}
		return day*flag;
	}
	void display()
	{
		std::cout << _year << "-" << _month << "-" << _day << "-" << std::endl;
	}
private: 
		int _year;  
		int _month; 
		int _day;
};

void testDate()
{
	Date d1(2019, 1, 30);
	Date d2(2019, 2, 28);
	d1++;
	d1.display();
	d2--;
	d2.display();
}
int main()
{
	testDate();
	return 0;
}

