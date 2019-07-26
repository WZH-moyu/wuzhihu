// write your code here cpp// write your code here cpp
#include<iostream>
using namespace std;
long long F(int n)
{
	if (n < 2)
		return 0;
	if (n == 2)
		return 1;
	if (n == 3)
		return 2;
	return ((n - 1)*(F(n - 1) + F(n - 2)));
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		cout << F(n) << endl;
	}
	return 0;
}