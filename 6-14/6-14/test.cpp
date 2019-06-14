//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	while (cin >> s1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < s1.size(); i++)
//		{
//			for (j = 0; j < s1.size(); j++)
//			{
//				if (i != j)
//				{
//					if (s1[i] == s1[j])
//						break;
//				}
//			}
//			if (j == s1.size())
//			{
//				cout << s1[i] << endl;
//				break;
//			}
//		}
//		if (i == s1.size())
//			cout << -1 << endl;
//		s1.clear();
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int hashtable[256] = { 0 };
//		for (auto c : s)
//		{
//			hashtable[c]++;
//		}
//		size_t i = 0;
//		for (; i < s.size(); ++i)
//		{
//			if (hashtable[s[i]] == 1)
//			{
//				cout << s[i] << endl;
//				break;
//			}
//		}
//		if (i == s.size())
//		{
//			cout << -1 << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int HFC(int n, int m)
{
	if (m%n == 0)
		return n;
	else
	{
		for ( int i = n - 1; i > 0; i--)
		{
			if (n%i == 0 && m%i == 0)
				return i;
		}
	}
	return 1;
}
int main()
{
	int num = 0;
	vector<int> v;
	while (cin >> num)
	{
		int pow = 0;
		cin >> pow;
		v.resize(num);
		for (int i = 0; i < v.size(); i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (pow >= v[i])
				pow += v[i];
			else
			{
				int ret = HFC(pow, v[i]);
				pow += ret;
			}
		}
		cout << pow << endl;
		v.clear();
	}
	return 0;
}