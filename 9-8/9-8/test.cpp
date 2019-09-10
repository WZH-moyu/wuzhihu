//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<char> v;
//	v.resize(27);
//	v[0] = '0';
//	char ret = 64;
//	for (int i = 1; i < 27; i++)
//	{
//		v[i] = ret + i;
//	}
//	string s1;
//	while (cin >> s1)
//	{
//		if (s1.empty())
//			cout << 0 << endl;
//		else
//		{
//			for (int i = 0; i < s1.size(); i++)
//			{
//				cout << v[s1[i]];
//			}
//			for (int i = 0; i < s1.size(); i += 2) {
//				cout << v[s1[i]];
//			}
//		}
//		s1.clear();
//	}
//	return 0;
//}#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<char> v;
//	v.resize(27);
//	v[0] = '0';
//	char ret = 64;
//	for (int i = 1; i < 27; i++)
//	{
//		v[i] = ret+i;
//	}
//    string s1;
//    while(cin>>s1)
//    {
//            if(s1.empty())
//        cout<<0<<endl;
//    else
//    {
//         for(int i=0;i<s1.size();i++)
//        {
//            cout<<v[s1[i]+1];
//        }
//        for(int i=0;i<s1.size();i+=2){
//            cout<<v[s1[i]+1];
//        }
//    }
//        s1.clear();
//    }
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<char> v;
//	v.resize(27);
//	v[0] = '0';
//	char ret = 64;
//	for (int i = 1; i < 27; i++)
//	{
//		v[i] = ret + i;
//	}
//	string s1;
//	while (cin >> s1)
//	{
//		if (s1.empty())
//			cout << 0 << endl;
//		else
//		{
//			for (int i = 0; i < s1.size(); i++)
//			{
//				cout << v[s1[i] + 1];
//			}
//			for (int i = 0; i < s1.size(); i += 2) {
//				cout << v[s1[i] + 1];
//			}
//		}
//		s1.clear();
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		if (n == 0)
//		{
//			cout << 0 << endl;
//			break;
//		}
//		vector<int> v;
//		v.resize(n);
//		int ret = 0;
//		int max = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//		}
//		if (n == 1)
//		{
//			cout << v[0] << endl;
//			break;
//		}
//		for (int i = n - 1; i > 0; i--)
//		{
//			if (v[i] < v[i - 1])
//			{
//				ret = v[i];
//			}
//		}
//	}
//	return 0;
//}
//被看到最多次的机器人
//水桶盛水
//小Q的方块游戏
//解码问题
using namespace std;
int main()
{
	int b = 10, a = 3;
	b += b *= b %= a++;
	cout << b << endl;

	return 0;
}