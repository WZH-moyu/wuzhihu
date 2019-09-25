#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin >> s1;
	long long int c;
	for (long long int k = 0;; k++)
	{
		c = 3 * k + pow(2, k) + pow(3, k);
		s2 = c;
		if (s2.size() >= s1.size())
			cout << s2 << endl;
	}
	return 0;
}
	