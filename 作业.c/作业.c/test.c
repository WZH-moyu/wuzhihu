#define _CRT_SECURE_NO_WARNINGS
//1.打印质数
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.打印乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d       ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//3.打印1000--2000年的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//	}
//	system("pause");
//	return 0;
//}
//1.交换两个整形变量的值
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	scanf("%d%d", &x, &y);
//	ret = x;
//	x = y;
//	y = ret;
//	printf("x=%d  y=%d\n",x, y);
//	system("pause");
//	return 0;
//}
//2.不创建临时变量，交换两个数的值
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	x = x^y;
//	y = x^y;
//	x = x^y;
//	printf("x=%d  y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//3.求10个整数中最大的数
//int main()
//{
//	int i= 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int ret = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>ret)
//		{
//			ret = arr[i];
//		}
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//4.将三个数从大到小输出
//int main()
//{
//	int i = 0;
//	int arr[4] = { 0 };
//	scanf("%d %d %d", arr);
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			arr[i + 1] =arr[i];
//			arr[i] = arr[i+1];
//		}
//	}
//	printf("%d\n", arr);
//	system("pause");
//	return 0;
//}
//求两个数的最大公约数
//int main()
//{
//	int x;
//	int y;
//	int c = 0;
//	scanf("%d %d", &x, &y);
//	while (x%y != 0)
//	{
//		c = x%y;
//		x = y;
//		y = c;
//	}
//	printf("%d\n",y);
//	system("pause");
//	return 0;
//}
//1.交换两个数组的值
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int arr2[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		ret = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = ret;
//	}
//	system("pause");
//	return 0;
//}
//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag=1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		j = i % 10;
//		if (j == 9)
//		{
//			count++;
//		}
//		if (i / 10 % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}