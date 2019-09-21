//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		vector<int> v1;
//		v1.resize(n);
//		vector<int> v2;
//		v2.resize(m);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v1[i];
//		}
//		for (int i = 0; i < m; i++)
//		{
//			cin >> v2[i];
//		}
//		int count = 0;
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (v2[i] == v1[j])
//					count++;
//			}
//			cout << count << endl;
//			count = 0;
//		}
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int T;
//	cin >> T;
//	int i = T;
//	while (i > 0)
//	{
//		if (i % 3 == 0)
//			cout << "YES" << endl;
//		else
//			cout << "YES" << endl;
//		i--;
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int T = 0;
	cin >> T;
	int i = T;
	while (i > 0)
	{
		int n = 0;
		cin >> n;
		vector<int> v;
		v.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		if (n <= 1)
		{
			cout << 0 << endl;
			continue;
			i--;
		}
		int ret = 0;
		int tmp = 1;
		ret = v[0];
		int maxtmp = tmp;
		for (int i = 1; i < n; i++)
		{
			ret = (v[i] > ret) ? ret + v[i] : v[i];
			if (v[i] != ret)
				tmp++;
			maxtmp = max(tmp, maxtmp);
			if (v[i] == ret)
				tmp = 1;
		}
		cout << maxtmp << endl;
		i--;
	}
	return 0;
}