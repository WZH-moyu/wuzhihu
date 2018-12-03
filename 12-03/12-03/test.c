#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////1.一个数组中只有两个数字是出现一次， 
////其他所有数字都出现了两次。
////找出这两个数字，编程实现。
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[] = { 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
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

////2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
////给20元，可以多少汽水。
////编程实现。
//int main()
//{
//	int n = 20;
//	int i = 0;
//	int count = 0;
//	for (n = 20; n > 0; n--)
//	{
//		count++;
//		i++;
//		if (i >= 2)
//		{
//			i = 0;
//			n++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//
//}
////模拟实现strcpy
//void my_strcmp(char *dest, const char *src, int count)
//{
//	while ((*dest++ = *src++) && *src)
//	{
//		count--;
//		if (count <= 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//	char arr1[20] = {0};
//	char arr2[] = "abcdef";
//	my_strcmp(arr1, arr2, count);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
////模拟实现strcat
//void my_strcat(char *dest, const char *src, int count)
//{
//	while (*++dest)
//	{
//		;
//	}
//	while ((*dest++ = *src++) && *src)
//	{
//		count--;
//		if (count <= 0)
//		{
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//	char arr1 [20]= "hello word ";
//	char arr2[] = "hahaha";
//	my_strcat(arr1, arr2, count);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}