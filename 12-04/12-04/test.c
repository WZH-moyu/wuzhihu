//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
////模拟实现strcpy函数
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
////模拟实现strcat函数
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
////模拟实现strstr函数
//char * my_strstr(const char *dest, const char *src)
//{
//	assert(dest!=NULL);
//	assert(src != NULL);
//	const char *st1 = dest;
//	const char *st2 = src;
//	const char *s = st1;
//	while (*st1)
//	{
//		while ((*st1++ == *st2++) && *st2)
//		{
//			;
//		}
//		if (!*st2)
//		{
//			return s;
//		}
//		else
//		{
//			st1 = ++s;
//			st2 = src;
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdefg";
//	char arr2[] = "bccde";
//	char * ret=my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//模拟实现strchr函数
//char * my_strchr(const char *dest, int  n)
//{
//	assert(dest != NULL);
//	while (*dest++ != n)
//	{
//		;
//	}
//	if (*--dest == n)
//	{
//		return dest;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdeff123";
//	char x = 0;
//	scanf("%s", &x);
//	char *ret = my_strchr(arr, x);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
////模拟实现strcmp函数
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
////模拟实现memcpy函数
//void * my_memcpy(void *dest, const void *src,int  count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		*(char *)dest = *(char *)src;
//		dest = (char *)dest+1;
//		src = (char *)src + 1;
//	}
//	return dest;
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[10] = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int count = 0;
//	int i = 0;
//	scanf("%d", &count);
//	char*ret = my_memcpy(arr1, arr2, count);
//	for (i = 0; i < 20; i++)
//	{
//		printf("%3d", arr1[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
////模拟实现memmove函数
//void * my_memmove(void *dest, const void *src, int  count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (((char *)dest + count )>(char *) src)
//	{
//		while (count--)
//		{
//			*(char *)dest = *(char *)src;
//			dest = (char *)dest + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char *)dest + count) = *((char *)src + count);
//		}
//	}
//	return dest;
//}
//int main()
//{
//	int arr1[10] = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int count = 0;
//	int i = 0;
//	scanf("%d", &count);
//	char*ret = my_memmove(arr1, arr1+3, count);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", arr1[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
