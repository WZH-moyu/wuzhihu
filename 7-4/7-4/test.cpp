////三角形
////#include<iostream>
//////#include<stdio.h>
////using namespace std;
////int main()
////{
////	long long   a, b, c;
////	while (cin >> a >> b >> c)
////	{
////		cout << endl;
////		if ((a + b > c) && (a + c > b) && (b + c > a))
////		{
////			if ((a - b < c) && (b - c < a) && (c - a < b))
////				cout << "Yes" << endl;
////		}
////		else
////			cout << "No" << endl;
////	}
////	return 0;
////}
//#include<iostream>
//using namespace std;
//int main()
//{
//	long double a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		if ((a + b > c) && (a + c > b) && (c + b > a))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	return 0;
//}
////加法
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		int sum = 0;
//		int flag = 1;
//		while (flag)
//		{
//			sum = num1 ^ num2;
//			flag = (num1&num2) << 1;
//			num1 = sum;
//			num2 = flag;
//		}
//		return num1;
//	}
//};
#include<iostream>
#include<vector>
using namespace std;
void oddInOddEvenInEven(vector<int>& arr, int len) {
	int i = 0, j = 1;
	int num = 0;
	while (i <= len && j <= len)
	{
		while ((arr[i] % 2 == 0) && (i < len))
		{
			i += 2;
			if (i >= len)
				break;
		}
		while ((arr[j] % 2 == 1) && (j < len))
		{
			j += 2;
			if (j >= len)
				break;
		}
		num = arr[i];
		arr[i] = arr[j];
		arr[j] = num;
	}
}
int main()
{
	vector<int> arr;
	int len = 11;
	arr.resize(len);
	arr = { 7,7,9,5,1,6,7,9,3,2,6 };
	oddInOddEvenInEven(arr, len);
	return 0;
}