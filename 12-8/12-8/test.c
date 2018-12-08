#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
////模拟实现strncpy
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
////模拟实现strncat
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
//	my_strcat(arr1, arr1, count);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
////模拟实现strncmp函数
//int my_strcmp(const char *dest, const char *src, int count)
//{
//	int ret = 0;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ( count &&!(ret = (*(unsigned char *)dest) - (*(unsigned char *)src)) && *dest)
//	{
//		dest++;
//		src++;
//		count--;
//	}
//	if (ret > 0)
//	{
//		return 1;
//	}
//	else if (ret < 0)
//	{
//		return -1;
//	}
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	int count = 0;
//	scanf("%d", &count);
//	char arr1[] = "abcdefgg";
//	char arr2[] = "abcdefg";
//	ret = my_strcmp(arr1, arr2, count);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}