#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int f(int n)
{
	return  pow(2, n - 1));
}
int main()
{
	int num = 0;
	while (cin >> num)
	{
		if (num <= 1)
			cout << 0 << endl;
		if (num == 2)
			cout << 1 << endl;
		if (num > 2)
		{
			long long int ret=f(num);
			cout << ret << endl;
		}
	}
	return 0;
}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//
//		vector<int, vector<int>> v(v,vector<int>(n+1, n + 1));
//		for (int i = 1; i < n + 1; i++)
//		{
//			cin >> v[0][i];
//		}
//		for (int j = 1; j < n + 1; j++)
//		{
//			cin >> v[j][0];
//		}
//	}
//	return 0;
//}