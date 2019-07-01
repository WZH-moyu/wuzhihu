//#include<iostream>
//using namespace std;
//int shugen(int n, int m)
//{
//	while (n > 9)
//	{
//		m += (n % 10);
//		n = n / 10;
//	}
//	m += n;
//	return m;
//}
//int main()
//{
//	int n = 0;
//	while(cin>>n)
//    {
//	int m = n;
//	while (m > 9)
//	{
//		m = shugen(m, 0);
//	}
//	cout << m << endl;
//	}
//	return 0;
//}
//数根
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<functional>
//#include <map>
//#include <set>
//#include <unordered_set>
//#include <unordered_map>
//#include <exception> 
//using namespace std;
//int numberRoot(string num) {
//	int cur = 0;
//	for (auto& c : num)
//		cur += c - '0';
//	num = to_string(cur);
//	while (num.size() > 1) {
//		cur = 0;
//		for (auto& c : num)
//			cur += c - '0';
//		num = to_string(cur);
//	}
//	return cur;
//}
//int main(int argc, char** argv)
//{
//	string num;
//	while (cin >> num)
//	{
//		cout << numberRoot(num) << endl;
//	}
//	return 0;
//}
//星际争霸
#include<iostream>
using namespace std;
#define FOR(i,n) for(i = 0; i < n; i++)
int main() {
	int n, X[100], F[10001], i;
	F[0] = 1, F[1] = 2;
	for (i = 1; i < 10001; i++)
		F[i + 1] = (F[i] + F[i - 1]) % 10000;
	while (cin >> n)
	{
		FOR(i, n)
			cin >> X[i];
		FOR(i, n)
			printf("%04d", F[X[i] - 1]);
		cout << endl;
	}
	return 0;
}