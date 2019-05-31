//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
	
	int j = 0;
	while (1)
	{
		string s1;
		getline(cin,s1);
		int s = s1.size();
		string s2(s, ' ');
		int  p = s1.rfind(" ");
		int i = s1.size() - (s1.size() - p);
		//int j = 0;
		while (i < (s1.size() - 1))
		{
			if (s1[i+1] != 1)
			{
				
				s2[j] = s1[i + 1];
				j++;
				i++;
				s1[i] = 1;
			}
			else
			{
				j++;
				break;
			}	
		}
		cout << s2 << endl;
	}
	
	system("pause");
	return 0;
}
//bool compare(int a,int b)
//{
//	return a > b;
//}
//int main()
//{
//	vector<int> a;
//	int n = 0;
//	while (cin >> n)
//	{
//		a.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		//vector<int> b(a);
//		//sort(b.begin(), b.end());
//		//sort(a.begin(),a.end(),compare);
//	//	sort(a.begin(), a.end());
//		//unique(a.end(), a.begin());
//		unique(a.begin(), a.end());
//		/*int c = a.size()-1;
//		if ((a[c] <b[c])|a[c]==a[c-1])
//		{
//			cout << 2 << endl;
//		}
//		else
//			cout << 1 << endl;*/
//		int i = 0;
//		for (i = 0; i < a.size(); i++)
//		{
//			if (a[i]>=a[i+1])
//			{
//				cout << 2 << endl;
//				break;
//			}
//		}
//		if (i == a.size())
//			cout << 1 << endl;
//	}
//}
