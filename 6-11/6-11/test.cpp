////#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	cin >> s1;
//	s2.resize(s1.size());
//	for (int j = s1.size() - 1, i = 0; j >= 0 && i<s1.size(); j--, i++)
//	{
//		s2[i] = s1[j];
//	}
//	cout << s2 << endl;
//	return 0;
//}
#include<iostream>
//#include<vector>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	string s3;
	while (cin >> s1 >> s2)
	{

		int arr[10000][2] = { 0 };
		int s = 0;
		//int m = 0;
		int sum = 0;
		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = 0; j < s2.size(); j++)
			{
				int a = i;
				int ret = j;
				while (s1[i] == s2[j] && j < s2.size() && i < s1.size())
				{
					i++;
					j++;
				}
				if (ret != j)
				{
					arr[s][0] = j - ret;
					arr[s][1] = ret;
					s++;
					j = ret;
					i = a;
				}
			}
		}
		for (int i = 0; i < s; i++)
		{
			if (sum < arr[i][0])
			{
				sum = arr[i][0];
				//m = arr[i][1];
			}
		}
		cout << sum << endl;
	}
	return 0;
}