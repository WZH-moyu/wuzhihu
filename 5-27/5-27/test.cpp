//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		// write code here
//		int n = 0;
//		int m = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (A[i] == '(')
//			{
//				n++;
//			}
//			else if (A[i] == ')')
//			{
//				m++;
//			}
//		}
//		if (m == n)
//			return true;
//		else
//			return false;
//	}
//};
int main()
{
	vector<unsigned int> v1;
	v1.resize(1000);
	v1[0] = 0;
	v1[1] = 1;
	int i = 1;
	int n = 0;
	cin >> n;
	while (v1[i] < n)
	{
		i++;
		v1[i] = v1[i - 1] + v1[i - 2];
	}
	int ret1 = 0;
	int ret2 = 0;
	ret1 = n - v1[i - 1];
	ret2 = v1[i] - n;
	if (ret1>ret2)
		cout << ret2 << endl;
	else
		cout << ret1 << endl;
	return 0;
}