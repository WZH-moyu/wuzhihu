#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//////返回参数二进制中 1 的个数
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		value = value&(value - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int value = 0;
//	scanf("%d", &value);
//	printf("%d\n", count_one_bits(value));
//	system("pause");
//	return 0;
//}
//写出一个函数返回参数二进制中1的个数；n>>&1==1(count++):右移按位与1，十一，计数器加一，返回count；while循环更加高效；
//while(n)
//{
//	n = n&(n - 1);//表示从低位到高位第一次出现1的位变为0，
//	count++;
//}
////2.获取一个数二进制序列中所有的偶数位和奇数位， 
////分别输出二进制序列。
//int main()
//{
//	unsigned int x = 0;
//	int i = 0;
//	int arr[32] = { 0 };
//	scanf("%d", &x);
//	int c = x;
//	for (i = 0; x != 0; i++)
//	{
//		arr[i] = x % 2;
//		x = x / 2;
//	}
//	printf("%d的二进制偶数位是：", c);
//	for (i = 31; i >= 0; i-= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	printf("%d的二进制奇数位是：", c);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
////4.两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
////输入例子:
////1999 2299
////输出例子 : 7
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	int ret = 0;
//	int count=0;
//	int arr[32] = { 0 };
//	scanf("%d %d", &x, &y);
//	ret = x^y;
//	for (i = 0; ret != 0; i++)
//	{
//		arr[i] = ret % 2;
//		ret/=2;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (arr[i] == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d和%d二进制表达中，有%d个位(bit)不同\n", x, y, count);
//	system("pause");
//	return 0;
//}