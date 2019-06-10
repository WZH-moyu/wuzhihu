//#define _CRT_SECURE_NO_WARNINGS
//#include<string>
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	string s3;
//	vector<int> v1;
//	vector<int> v2;
//	v1.resize(20);
//	v2.resize(20);
//	int ret = 0;
//	int s = 0;
//	while (cin >> s1 >> s2)
//	{
//		if (s1.size() < s2.size())
//		{
//			s3 = s2;
//			s2 = s1;
//			s1 = s3;
//		}
//		int i = s1.size(), j = s2.size();
//		while (i >= 0 && j >= 0)
//		{
//			ret = j;
//			while (s1[i] == s2[j])
//			{
//				i--;
//				j--;
//			}
//			if (ret != j)
//			{
//				v1[s] = ret;
//				v2[s] = ret - j+1;
//				s++;
//			}
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int>v1;
//	v1.resize(20);
//	int count=0;
//	int ret = 0;
//	int sum = 0;
//	int s = 0;
//	while (cin >> v1[count])
//	{
//		count++;
//	}
//	for (int i = 0; i < count ; i++)
//	{
//		ret = v1[i];
//		if (ret < 2)
//			cout << 0 << endl;
//		else
//		{
//			while (ret > 2)
//			{
//				sum += ret / 3;
//				s = ret % 3;
//				ret /= 3;
//				ret += s;
//			}
//			if (ret == 2)
//				sum += 1;
//			cout << sum << endl;
//			sum = 0;
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	vector <vector<int>>v(100, vector <int>(0));
//	string s1;
//	string s2;
//	string s3;
//	int s = 0;
//	int m = 0;
//	int sum = 0;
//	cin >> s1 >> s2;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		for (int j = 0; j < s2.size(); j++)
//		{
//			int a = i;
//			int ret = j;
//			while (s1[i] == s2[j])
//			{
//				i++;
//				j++;
//			}
//			if (ret != j)
//			{
//				v[s][0] = j - ret;
//				v[s][1] = ret;
//				s++;
//				j = ret;
//				i = a;
//			}
//		}
//	}
//	for (int i = 0; i < s; i++)
//	{
//		if (sum < v[s][0])
//		{
//			sum = v[s][0];
//			m = i;
//		}
//	}
//	for (int i = 0; i < sum; i++)
//	{
//		s3[i] = s2[m];
//		m++;
//	}
//	cout << s3 << endl;
//	return 0;
//}
//#include<iostream>
////#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	string s3;
//	while (cin >> s1 >> s2)
//	{
//		int arr[10000][2] = { 0 };
//		int s = 0;
//		int m = 0;
//		int sum = 0;
//		for (int i = 0; i < s1.size(); i++)
//		{
//			for (int j = 0; j < s2.size(); j++)
//			{
//				int a = i;
//				int ret = j;
//				while (s1[i] == s2[j]&&j<s2.size()&&i<s1.size())
//				{
//					i++;
//					j++;
//				}
//				if (ret != j)
//				{
//					arr[s][0] = j - ret;
//					arr[s][1] = ret;
//					s++;
//					j = ret;
//					i = a;
//				}
//			}
//		}
//		for (int i = 0; i < s; i++)
//		{
//			if (sum < arr[i][0])
//			{
//				sum = arr[i][0];
//				m = arr[i][1];
//			}
//		}
//		for (int i = 0, j = m; i < sum,j<s2.size(); i++,j++)
//		{
//			s3.push_back (s2[j]);
//		}
//		cout << s3 << endl;
//	}
//
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
		int m = 0;
		int sum = 0;
		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = 0; j < s2.size(); j++)
			{
				int a = i;
				int ret = j;
				while (s1[i] == s2[j]&&j<s2.size()&&i<s1.size())
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
				m = arr[i][1];
			}
		}
		for (int i = 0, j = m; i < sum,j<s2.size(); i++,j++)
		{
			s3.push_back (s2[j]);
		}
		cout << s3 << endl;
	}

	return 0;
}