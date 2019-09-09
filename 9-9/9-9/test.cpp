//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout <<"hello"<< endl;
//	}
//	static int a ;
//};
//int main()
//{
//	A s[10];
//	A *a[5];
//	cout << sizeof(A) << endl;
//	system("pause");
//	return 0;
//}
//#include<stdlib.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	long long int num;
//	cin >> num;
//	vector<int> v1;
//	v1.resize(num);
//	vector<int> v2;
//	int tmp = 0;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> v1[i];
//	}
//	int ret;
//	cin >> ret;
//	v2.resize(3 * ret);
//	for (int i = 0; i < 3 * ret; i++)
//	{
//		cin >> v2[i];
//	}
//	for (int i = 0; i < 3 * ret - 1; i++)
//	{
//		for (int j = v2[i] - 1; j < v2[i + 1]; j++)
//		{
//			if (v1[j] == v2[i + 2])
//			{
//				tmp++;
//			}
//		}
//		cout << tmp << endl;
//		tmp = 0;
//	}
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	vector<int> v1;
	vector<int> v2;
	v1.resize(100);
	v2.resize(100);
	int num = 0;
	int i = 0;
	while (cin >> v1[i])
	{
		i++;
	}
	int j = 0;
	while (cin >> v2[j])
	{
		j++;
	}
	cin >> num;
	int ret = 0;
	int count = 0;
	for (int a = 0; a < i; a++)
	{
		if (v2[a] == num)
		{
			count++;
			ret == v1[a];
		}
		for (int b = 0; b < i; b++)
		{
			if (v2[b] == ret)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
	system("pause");
}
