//#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	int ret = 0;
	for (int i = 1; i<=m; i++)
	{
		ret += (pow(n-1,i)+n-1);
	}
	ret++;
	cout << ret << endl;
	system("pause");
	return 0;
}