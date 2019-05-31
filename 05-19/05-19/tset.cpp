#define _CRT_SECURE_NO_WARNINGS
////¶þ²æËÑË÷Ê÷
//#include<iostream>
#include<stdlib.h>
//#include<algorithm>
////#include<string>
//#include<vector>
//using namespace std;
//template<class T>
//struct BSTNode
//{
//	BSTNode(const T& val = T())
//	:_data(val)
//	, _pLeft(nullptr)
//	, _pRight(nullptr)
//	{}
//	T _data;
//	BSTNode<T>* _pLeft;
//	BSTNode<T>* _pRight;
//
//};
//template<class T>
//class BSTree
//{
//	typedef BSTree<T> Node;
//
//};
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	while (1)
//	{
//		std::cin >> n;
//		int m = 3 * n;
//		int a_i[90] = { 0 };
//		for (i = 0; i < m; i++)
//		{
//			std::cin >> a_i[i];
//		}
//		std::sort(a_i, a_i+m-1);
//		/*for (i = m-1; i >0; i--)
//		{
//			int flag = 0;
//			for (j =0; j<i; j++)
//			{
//				if (a_i[j]>=a_i[j+1])
//				{
//					int tmp = a_i[j];
//					a_i[j] = a_i[j+1];
//					a_i[j+1] = tmp;
//					flag = 1;
//				}
//			}
//			if (flag==0)
//				break;
//		}*/
//		for (i = n, j = m-2; i <=j;j-=2)
//		{
//			sum += a_i[j];
//		}
//		std::cout << sum <<std:: endl;
//	}
//	//system("pause");
//	return 0;
//};
////#include<stdio.h>
////#include<string.h>
////int main()
////{
////	char s1[] = {0};
////	char s2[] = {0};
////	scanf("%s\n", s1);
////	scanf("%s\n", s2);
////	int i = 0;
////	i = strlen(s2) - 1;
////	int j = 0;
////	int s = strlen(s1) - 1;
////	while (i >= 0)
////	{
////		if (s1[j] == s2[i])
////		{
////			for (int k = j; k<s; k++)
////			{
////				s1[k] = s1[k + 1];
////			}
////			if (j>s)
////				i--;
////		}
////		j++;
////	}
////	printf("%s", s1);
////	return 0;
////}
//#include<iostream>
//#include<algorithm>
////using namespace std;
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int j = 0;
//	while (1)
//	{
//		std::cin >> n;
//		int m = 3 * n;
//		int a_i[90] = { 0 };
//		for (int i = 0; i < m; i++)
//		{
//			std::cin >> a_i[i];
//		}
//		std::sort(a_i, a_i + m - 1);
//		for (int i = n,  j = m - 2; i <= j; j -= 2)
//		{
//			sum += a_i[j];
//		}
//		std::cout << sum << std::endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	char *p = "They are students.";
	char *q = "aeiou";
	int j = strlen(q);
	for (int i = 0;i<strlen(p);i++)
	{
		if (p+i==q+j)
		{
			for (int s = i; s < strlen(p); s++)
			{
				p[s] = p[s + 1];
			}
		}
		if (i == strlen(p))
			j--;
	}
	cout << p << endl;
	system("pause");
	return 0;
}