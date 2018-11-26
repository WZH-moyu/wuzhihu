#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//输入一个数，递归实现各个数位的和
//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + Digitsum(n / 10);
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Digitsum(n));
//	system("pause");
//	return 0;
//}
//字符串反转
//reverse_string(char *str)
//{
//	if (*str)
//	{
//		char *start = str;
//		char* end = str + strlen(str) - 1;
//		char temp = *start;
//		*start = *end;
//		*end = '\0';
//		reverse_string(start + 1);
//		*end =temp;
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//递归和非递归实现strlen
//递归实现strlen
//my_strlen(char*str)
//{
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", str);
//	printf("%d\n", my_strlen(str));
//	system("pause");
//	return 0;
//}
//递归和非递归求n的阶乘
//非递归：循环连乘1~n的数
//递归：如果是0或1，返回1；其他返回n*f(n-1)；
//递归实现打印整数的每一位
//print(int n)
//{
//	if (n >= 10)
//	{
//		print(n / 10);
//	}
//	printf("%d    ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}
//写出一个函数返回参数二进制中1的个数；n>>&1==1(count++):右移按位与1，十一，计数器加一，返回count；while循环更加高效；
//while(n)
//{
//	n = n&(n - 1);//表示从低位到高位第一次出现1的位变为0，
//	count++;
//}
