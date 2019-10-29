#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int fun(char* s)
{
	if (*s == '\0')
		return 0;
	int ret = 1;
	ret += fun(++s);
	return ret;
}
int main()
{
	char s[20];
	cin >> s;
	int ret = fun(s);
	cout << s << endl;
	cout << ret << endl;
	system("pause");
	return 0;
}