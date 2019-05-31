//#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	string s3;
	getline(cin, s1);
	getline(cin, s2);
	int c1 = s1.size();
	int c2 = s2.size();
	int c3 = c1 + c2;
	int n = 0;
	int m = 0;
	int ret = 0;
	s3.resize(c3);
	//s3.reserve(c3);
	for (int i = 0; i < c3; i++)
	{
		s3.clear();
		s3.insert(0, s1);
		s3.insert(i, s2);
		for (n = c3 - 1, m = 0; n >= m; n--, m++)
		{
			if (s3[n] != s3[m])
				break;
		}
		if (m>n)
			ret++;
	}
	cout << ret << endl;
	system("pause");
	return 0;
}
//int main()
//{
//	vector<int> arr1;
//	vector<int> arr2;
//	int sum = 0;
//	int n = 0;
//	int s = 0;
//	cin >> n;
//	arr1.resize(n);
//	arr2.resize(n);
//	int i =0;
//	while (i < n)
//	{
//		cin >> arr1[i];
//		i++;
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (arr1[j]>0)
//			sum += arr1[j];
//		else
//		{
//			arr2[s] = sum;
//			s++;
//			sum = 0;
//		}
//	}
//	arr2[s] = sum;
//	int ret = 0;
//	for (int k = 0; k <=s; k++)
//	{
//		if (ret<arr2[k])
//			ret = arr2[k];
//	}
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<vector>
//#include<string>
using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	vector<int> arr1;
//	vector<int> arr2;
//	int sum = 0;
//	int n = 0;
//	int s = 0;
//	//  int m=0;
//	//  int g=0;
//	cin >> n;
//	arr1.resize(n);
//	arr2.resize(n);
//	int i = 0;
//	while (i < n)
//	{
//		cin >> arr1[i];
//		i++;
//	}
//	/*	for (int j = 0; j < n; j++)
//	{
//	if (arr1[j]>0)
//	sum += arr1[j];
//	else
//	{
//	m = j;
//	for (g = m; g < j; g++)
//	{
//	if ((-arr1[j])>arr1[g]||arr1[j+1]>(-arr1[j]))
//	{
//	break;
//	}
//	}
//	if (g == m)
//	break;
//	arr2[s] = sum;
//	s++;
//	sum = 0;
//	}
//	}*/
//	for (int j = 0; j < n; j++)
//	{
//		if (arr1[j]>0)
//			sum += arr1[j];
//		else
//		{
//			arr2[s] = sum;
//			s++;
//			sum = 0;
//		}
//	}
//	arr2[s] = sum;
//	int ret = 0;
//	for (int k = 0; k <= s; k++)
//	{
//		if (ret<arr2[k])
//			ret = arr2[k];
//	}
//	cout << ret << endl;
//	return 0;
//}