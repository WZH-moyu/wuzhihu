////分解因数
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int num=0;
//	string s1;
//	while(cin>>num)
//	{
//		cout<<num<<'=';
//		int i=2;
//		while(num>3)
//		{
//			if(num%i==0)
//			{
//				num=num/i;
//				cout<<i<<'*';
//			}
//			else
//				i++;
//		}
//		if(num>1)
//		  cout<<num<<endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		cout << num << " = ";
//		int* num1 = new int[1000];
//		int j = 0;
//		for (int i = 2; i <= sqrt(num); i++)
//		{
//			while (num % i == 0)
//			{
//				if (num != 1)
//				{
//					num1[j] = i;
//					j++;
//					num /= i;
//				}
//			}
//		}
//		if (num != 1)
//		{
//			num1[j] = num;
//			j++;
//		}
//		for (int k = 0; k < j; k++)
//		{
//			cout << num1[k];
//			if (k + 1 < j)
//			{
//				cout << " * ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//美国节日
// write your code here cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int year = 0;
	cin >> year;
	vector<int> v1, v2;
	int days = 0;
	int week = 6;
	cout << year << "-01" << "-01" << endl;
	int y = year;
	//以2000年为参考系，2000-01-01是星期六
	v1 = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	v2 = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (year > 2000)
	{
		int num = year - 2000;
		for (int i = 0; i < num; i++)
		{
			year += i;
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				days += 366;
			}
			else
			{
				days += 365;
			}
		}
		week += (days % 7 + 1);
		if (week > 7)
			week -= week;
	}
	else if (year < 2000)
	{
		int num = 2000 - yesr;
		for (int i = 1; i <= num; i++)
		{
			year -= i;
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				days += 366;
			}
			else
			{
				days += 365;
			}
		}
		week += (days % 7 - 1);
		if (week > 7)
			week -= week;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (week > 1 && week < 7)
			days = 7 - week + 16;
		else
			days = 7 - week + 9;
		cout << y << "-01" << '-' << days << endl;
		week += v2[0];
		week = week % 7 + 1;
		if (week > 1 && week < 7)
			days = 7 - week + 16;
		else
			days = 7 - week + 9;
		cout << y << "-02" << '-' << days << endl;
		week += (v2[1] + v2[2] + v2[3] + v2[4]);
		week = week % 7 + 1;

	}
	return 0;
}