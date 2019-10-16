#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
//void FindLastString(const std::string &s)
//{
//	int i = 0;
//	int count[256] = { 0 };
//	for (; i < s.size(); i++)
//		count[s[i]]++;
//	for (i = s.size() - 1; i >= 0; i--)
//	{
//		if (count[s[i]] == 1)
//		{
//			std::cout << s[i] << std::endl;
//			break;
//		}
//	}
//	if (i == -1)
//		std::cout << -1 << std::endl;
//}
//int main()
//{
//	std::string s;
//	std::cin >> s;
//	FindLastString(s);
//	system("pause");
//	return 0;
//}
void Fun(int n, int m)
{
	int num = n;
	std::vector<int> v;
	while (num > 0)
	{
		int ret = num % m;
		v.insert(v.begin(), ret);
		num /= m;
	}
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i];
	}
	std::cout << std::endl;
}
int main()
{
	int n = 0, m = 0;
	std:: cin >> n >> m;
	Fun(n, m);
	system("pause");
	return 0;
}