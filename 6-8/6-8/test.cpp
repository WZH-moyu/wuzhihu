//#define _CRT_SECURE_NO_WARNINGS
//#include<stdlib.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	vector<int>v1;
//	cin >> n;
//	int ret = 0;
//	v1.resize(n);
//	v1[0] = 1;
//	v1[1] = 0;
//	for (int i = 2; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			v1[j] = v1[j - 2] + v1[j - 1];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		ret += v1[i];
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	string s3;
//	int i = 0, j = 0;
//	int ret = 0;
//	for ( i = 0, j=0; i < s2.size(),j<s1.size(); i++,j++)
//	{
//		while (((s2[i] >= 48 && s2[i] <= 57) || (s2[i] >= 97 && s2[i] <= 122) || (s2[i] >= 65 && s2[i] <= 90)) && s1[j] == 42)
//		{
//			ret = 1;
//			i++;
//		}
//		if (s1[j] == 63)
//		{
//			ret = 1;
//		}
//		if (s1[j] == s2[i])
//		{
//			ret = 1;
//		}
//		if (ret == 1)
//		{
//			ret = 0;
//		}
//		else
//		{
//			cout << "false" << endl;
//			return 0;
//		}
//	}
//	if (i == s2.size() && j == s1.size())
//	{
//		cout << "true" << endl;
//	}
//	else
//		cout << "false" << endl;
//	return 0;
//
//}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	string s3;
	while (cin >> s1 >> s2)
	{
		int i = 0, j = 0;
		int ret = 0;
		int count = 0;
		for (i = 0, j = 0; i < s2.size(), j<s1.size(); i++, j++)
		{
			while (((s2[i] >= 48 && s2[i] <= 57) || (s2[i] >= 97 && s2[i] <= 122) || (s2[i] >= 65 && s2[i] <= 90)) && s1[j] == 42)
			{
				ret = 1;
				count = 1;
				i++;	
			}
			if (count == 1)
			{
				i--;
				count = 0;
			}
			if (s1[j] == 63)
			{
				ret = 1;
			}
			if (s1[j] == s2[i])
			{
				ret = 1;
			}
			if (ret == 1)
			{
				ret = 0;
			}
			else
			{
				s3 = "false";
				i = s1.size()+1;
			}
		}
		if (i == s2.size() && j == s1.size())
		{
			s3 = "ture";
		}
		else
			s3 = "false";
		//return 0;
		cout << s3 << endl;
		s1.clear();
		s2.clear();
		s3.clear();
	}
	return 0;
}