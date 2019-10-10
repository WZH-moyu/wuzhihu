#include<iostream>
using namespace std;
int main()
{
	int M, S, T;
	cin >> M >> S >> T;
	int t = 0;
	int n = M / 10;
	int l = 0;
	int m = M % 10;
	while ((S - l) > 0)
	{
		t = n;
		l = 50 * n;
		if ((S - l) > 42) 
			t += (10 - m) / 4 + 1;
			m = m - 10;
	}
		if (t <= T) {
			cout << "YES" << t << endl;
		}
		else
			cout << "NO" << endl;
		return 0;
}