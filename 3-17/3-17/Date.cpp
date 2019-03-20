#include"Date.h"
bool operator > (const Date&d);
bool operator < (const Date&d);
bool operator <= (const Date&d);
bool operator >= (const Date&d);
bool operator == (const Date&d);
bool operator != (const Date&d);
bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}
	return false;。��/。。。
}