//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	cout <<"[D,E,C,F,B,A]" << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string s;
//	vector<int> v;
//	int n = 0;
//		while (getline(cin, s))
//		{
//			if (s[0] == 'o')
//			{
//				int j = 1;
//				for (int i = s.size() - 1; i >= 0; i--)
//				{
//					if (s[i] != ' ')
//					{
//						n = (s[i] - 48)*j;
//						j *= 10;
//					}
//					else
//					{
//						v.push_back(n);
//						n = 0;
//						break;
//					}
//				}
//			}
//			s.clear();
//		}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//	cout << -1 << endl;
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	double n;
	cin >> n;
	for (int i = 0; i < 1000; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			double ret = (double)i / (double)j;
			if (ret == n) {
				cout << i << "/" << j << endl;
				break;
			}
		}
	}
	if (n < 0)
		cout << "Invalid Number" << endl;
	return 0;
}
