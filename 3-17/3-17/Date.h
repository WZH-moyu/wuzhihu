#pragma once
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{

	}
	//Date(Const Date& d);
	//Date& operatot=(const Date& d);
	//~Date();
	bool operator > (const Date&d);
	bool operator < (const Date&d);
	bool operator <= (const Date&d);
	bool operator >= (const Date&d);
	bool operator == (const Date&d);
	bool operator != (const Date&d);
	Date operator+(int day);
	Date& operator
private:
	int _year;
	int _month;
	int _day;
};