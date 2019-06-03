//#define _CRT_SECURE_NO_WARNINGS
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int N = 0;
//	int M = 0;
//	while (cin >> N >> M)
//	{
//		//cout << (M / N) - 1 << endl;
//		int n = N;
//		int m = M;
//		int count = 0;
//		for (int j = M/N; j>=0;j--)
//		{
//			int i = 0;
//			for ( i = n - 1; i>1; i--)
//			{
//				if (n%i == 0)
//				{
//					count++;
//					if ((n + i) <= M)
//					{
//						n += i;
//						break;
//					}	
//					else if ((n + i) > M)
//					{
//						count--;
//						
//					}
//				}
//				if (i == 2)
//					break;
//			}
//		}
//		if (n == M)
//			cout << count << endl;
//		else
//			cout << -1 << endl;
//	}
//	return 0;
//}
#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string s1;
	getline(cin, s1);
	int count = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == ' ')
		{
			count++;
			s1[i] = '\n';
		}
	}
	cout << count << endl;
	cout << s1 << endl;

	return 0;
}