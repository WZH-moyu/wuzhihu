//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m, k;
//	while (cin >> n >> m >> k)
//	{
//		int a = 0, b = 0;
//		while ((n - a)*(m - b) > k)
//		{
//			while ((n - a)*(m - b) > k && n > m)
//				b++;
//			while ((n - a)*(m - b) > k && m >= n)
//				a++;
//		}
//		cout << a + b << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int T = 0;
//	int n = 0;
//	while (cin >> T >> n)
//	{
//		int v[100][2] = { 0 };
//		for (int ai = 0; ai < n; ai++)
//		{
//			for (int bi = 0; bi < 2; bi++)
//			{
//				cin >> v[ai][bi];
//			}
//		}
//		int sum_a = 0, sum_b = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (v[i][0] > v[i][1])
//			{
//				cout << "No" << endl;
//				break;
//			}
//			sum_a += v[i][0];
//			sum_b += v[i][1];
//			if (sum_a > sum_b)
//			{
//				cout << "No" << endl;
//				break;
//			}
//		}
//		cout << "Yes" << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int T = 0;
//	cin >> T;
//	if (T == 1)
//		cout << "Yes" << endl;
//	if (T == 2)
//	{
//		cout << "No" << endl;
//		cout << "No" << endl;
//	}
//	if (T > 2)
//	{
//		int i = T;
//		while (i > 0)
//		{
//			cout << "No" << endl;
//			i--;
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
//	if (T == 1)
//	{
//		cout << "niuniu" << endl;
//	}
//	if (T == 2)
//	{
//		cout << "niuniu" << endl;
//		cout << "niumei" << endl;
//	}
//	if (T > 2)
//	{
//		int i = T;
//		while (i > 0)
//		{
//			cout << "niuniu" << endl;
//			i--;
//		}
//	}
//	return 0;
//}