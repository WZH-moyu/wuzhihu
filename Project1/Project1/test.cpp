//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
//class BinInsert {
//public:
//	int binInsert(int n, int m, int j, int i) {
//		// write code here
//		vector<int> v1;
//		vector<int> v2;
//		v1.resize(32);
//		v2.resize(32);
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		while (n)
//		{
//			v1[x] = n % 2;
//			n = n / 2;
//			v1[y] = m % 2;
//			m = m / 2;
//			x++;
//			y++;
//		}
//		int g = 0;
//		for (int s = j - 1; s <= i; s++)
//		{
//			v1[s] = v2[g];
//			g++;
//		}
//		for (int s = 0; s < x; s++)
//		{
//			ret += v1[s] * pow(2, s);
//		}
//		return ret;
//	}
//};
//int binInsert(int n, int m, int j, int i) {
//	// write code here
//	vector<int> v1;
//	vector<int> v2;
//	v1.resize(32);
//	v2.resize(32);
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	while (n)
//	{
//		v1[x] = n % 2;
//		n = n / 2;
//		v2[y] = m % 2;
//		m = m / 2;
//		x++;
//		y++;
//	}
//	int g = 0;
//	for (int s = j; s <= i; s++)
//	{
//		v1[s] = v2[g];
//		g++;
//	}
//	for (int s = 0; s < x; s++)
//	{
//		ret += v1[s] * pow(2, s);
//	}
//	return ret;
//}
//int main()
//{
//	int ret=binInsert(1024, 19, 2, 6);
//	return 0;
//}
#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	vector<int> v1;
	vector<int> v2;
	v1.resize(100);
	v2.resize(100);
	int n = 2;
	int m = num - 2;
	int x = 0;
	int y = 0;
	int s = 0;
	int min = 0;
	int c = 0;
	while (m > (num/2))
	{
		for (int i = 2; i < sqrt(n) + 1; i++)
		{
			if (n%i == 0)
				x = 0;
			else
				x = 1;
		}
		for (int i = 2; i < sqrt(m) + 1; i++)
		{
			if (m%i == 0)
				y = 0;
			else
				y = 1;
		}
		if (x&y)
		{
			v1[s] = n;
			v2[s] = m - n;
			s++;
		}
		n++;
		m--;
	}
	min = v2[0];
	for (int i = 1; i < s; i++)
	{
		if (v2[i] < min)
		{
			min = v2[i];
			c = i;
		}
	}
	cout << v1[c] << endl;
	cout << num - v1[c] << endl;
	system("pause");
	return 0;
}