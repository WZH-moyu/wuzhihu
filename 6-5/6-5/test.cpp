////#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int num = 0;
//	while (cin >> num)
//	{
//		vector<int> v1;
//		v1.resize(32);
//		int count = 0;
//		int i = 0;
//		while (num)
//		{
//			v1[i] = num % 2;
//			num /= 2;
//			i++;
//		}
//		for (int j = 0; j<i; j++)
//		{
//			if (v1[j] == 1)
//			{
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//
//	return 0;
//}
#include<vector>
#include<iostream>
using namespace std;
//class Gloves {
//public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		// write code here
		int ret = left.size();
		int s = 0;
		int m = 0;
		int sum = 0;
		vector<int> v;
		v.resize(13);
		int i = 0;
		int j = 0;
		for (i = 0; i < ret; i++)
		{
			if (left[i] != 0 && right[i] != 0)
			{
				v[j] = i;
				j++;
			}
			else{
				sum += left[i];
				sum += right[i];
			}
		}
		for (i = 0; i < j; i++)
		{
			if (s>left[i])
				s = left[i];
			if (m < right[i])
				m = right[i];
		}
		sum = sum + n + s+1;
		sum = sum +j+1;
		return sum;
	}
//};
	int main()
	{
		int n = 0;
		cin >> n;
		vector<int>left;
		vector<int>right;
		left.resize(n);
		right.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> left[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> right[i];
		}
		int sum=findMinimum(n, left, right);
		return 0;

	}