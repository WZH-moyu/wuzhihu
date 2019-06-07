//#define _CRT_SECURE_NO_WARNINGS
//#include<stdlib.h>
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	cin >> s1 >> s2;
//	string s3;
//	int size1 = s1.size()-1;
//	int size2 = s2.size()-1;
//	if (size1 > size2)
//	{
//		for (int i = size1, j = size2; i>=0; j--, i--)
//		{
//			if (j >= 0)
//			{
//				s1[i] = (s1[i] % 12 + s2[j] % 12) + 48;
//			}
//			if (s1[i] > 57)
//			{
//				s1[i]=s1[i] - 10;
//				s1[i - 1] += 1;
//			}
//		}
//		cout << s1 << endl;
//	}
//	else
//	{
//		for (int i = size1, j = size2; j >= 0; j--, i--)
//		{
//			if (i >= 0)
//			{
//				s2[j] = (s1[i] % 12 + s2[j] % 12) + 48;
//			}
//			if (s2[j] > 57)
//			{
//				s2[j] = s2[j] - 10;
//				s2[j - 1] += 1;
//			}
//		}
//			cout << s2 << endl;
//	}
//	system("pause");
//	return 0;
//}
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int s = 0;
	vector<vector<int> > v(2*n-1,vector<int>(2*n+1));
	v[0][n] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = n-i; j < 2*n ; j++)
		{
			v[i][j] = v[i - 1][j - 1] + v[i - 1][j] + v[i - 1][j + 1];
		}
	}
	for (s = 1; s < 2 * n ; s++)
	{
		if ((v[n - 1][s] % 2 == 0) && (v[n - 1][s]!=0))
		{
			cout << s << endl;
			break;
		}
	}
	if (s == 2 * n )
		cout << -1 << endl;
	system("pause");
	return 0;
}