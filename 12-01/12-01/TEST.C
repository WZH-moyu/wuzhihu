#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 0; B <= 5; B++)
//		{
//			for (C = 0; C <= 5; C++)
//			{
//				for (D = 0; D <= 5; D++)
//				{
//					for (E = 0; E <= 5; E++)
//					if (((B == 1) + (A == 3) == 1) &&
//						((B == 2) + (E == 4) == 1) &&
//						((C == 1) + (D == 2) == 1) &&
//						((C == 5) + (D == 3) == 1) &&
//						((E == 4) + (A == 1) == 1))
//					{
//						int num = 0;
//						int flag = 1;
//						num |= (1 << (A - 1));
//						num |= (1 << (B - 1));
//						num |= (1 << (C - 1));
//						num |= (1 << (D - 1));
//						num |= (1 << (E - 1));
//						while (num)
//						{
//							if (num % 2 == 0)
//							{
//								flag = 0;
//							}
//							num /= 2;
//						}
//						if (flag == 1)
//							printf(" A=%d\n B=%d\n C=%d\n D=%d\n E=%d\n", A, B, C, D, E);
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
////2.判断三人中有一人说谎
//int main()
//{
//	int i = 0;
//	for (i = 'A'; i <= 'D'; i++)
//	{
//		if ((i != 'A') + (i == 'C') + (i == 'D') + (i != 'D') == 3)
//		{
//			printf("%c\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
////1.编写函数： 
////unsigned int reverse_bit(unsigned int value);
////这个函数的返回值value的二进制位模式从左到右翻转后的值。
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int n = 0;
//	unsigned int sum = 0;
//	int arr[32] = { 0 };
//	while (value > 0)
//	{
//		arr[i] = value % 2;
//		value /= 2;
//		i++;
//	}
//	unsigned int ret = 0;
//	for (i = 0, n = 31; i < 32,n>0; i++, n--)
//	{
//		ret = pow(2*arr[i], n);
//		sum += ret;
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int value = 0;
//	scanf("%d", &value);
//	printf("%u\n", reverse_bit(value));
//	system("pause");
//	return 0;
//}
////2.不使用（a+b）/2这种方式，求两个数的平均值。 
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double ret = 0;
//	scanf("%lf %lf", &a, &b);
//	if (a>=b)
//	{
//	    ret = a - b;
//		ret = b + ret / 2;
//	}
//	else
//	{
//		ret = b - a;
//		ret = a + ret / 2;
//	}
//	printf("%lf\n", ret);
//	system("pause");
//	return 0;
//}
////3.3.编程实现： 
////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
////请找出这个数字。（使用位运算）
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[] = { 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if (i != j)
//			{
//				if ((arr[i] ^ arr[j]) == 0)
//				{
//					break;
//				}
//			}
//		}
//		if (j == sz)
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}
////4.有一个字符数组的内容为:"student a am i",
////			请你将数组的内容改为"i am a student".
////			要求：
////			不能使用库函数。
////			只能开辟有限个空间（空间个数和字符串的长度无关）。
//int main()
//{
//	char arr1[] = "student a am i";
//	int sz = sizeof(arr1);
//	char arr2[] = "i am a student";
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		arr1[i] = arr2[i];
//		printf("%c", arr1[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
