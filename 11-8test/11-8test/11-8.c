#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 10;
//	int j = 20;
//	i = i^j;
//	j = i^j;
//	i = i^j;
//	printf("i=%d,j=%d\n", i, j);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i, max;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d\n", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10;i++ )
//	{
//		if (max<arr[i])
//		max = arr[i];	
//	}
//	printf("max是%d\n", max);
//	system("pause");
//	return 0;
//}
////1.输出菱形
//int main()
//{
//	int i, j;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <=line - i; j++)
//		{
//			printf(" ");
//			
//		}
//		for (j = 1; j <= 2 * i - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * (line - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
////在数组中查找一个数
//int main()
//{
//	int i, j, n, k = 0, isFound = 0;
//	int num[] = { 30,28,26,24,22,20,18,16,14,12,10,8,6,4,2 };
//	printf("请输出一个整数：\n");
//	scanf("%d", &n);
//	i = (int)sizeof(num) / sizeof(num[0]) / 2;
//	j = (int)sizeof(num) / sizeof(num[0]) / 2;
//	while (k < 2)
//	{
//		i = (int)i / 2;
//		if (i == 0)
//			k++;
//		if (n<num[j])
//			j = j + (i + 1);
//		else if (n>num[j])
//			j = j - (i + 1);
//		else
//		{
//			isFound = 1;
//			break;
//		}
//	}
//	if (isFound)
//		printf("%d\n", j);
//	else
//		printf("-1\n");
//	system("pause");
//	return 0;
//}
