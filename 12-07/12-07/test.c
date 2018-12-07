#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////求存储的大小端
////1.指针方法判断
//
//int judge(int * p)
//{
//	return *(char *)p;
//}
//int main()
//{
//	int i = 1;
//	int * p = &i;
//	if (judge(p))
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	system("pause");
//	return 0;
//}
////联合体判断
//union judge
//{
//	int i;
//	char c;
//};
//int main()
//{
//	union judge j;
//	j.i = 1;
//	if (j.c)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	system("pause");
//	return 0;
//}
////使用宏求结构体成员偏移量
//#define OFFSETOF(stName, memName) (size_t)&(((stName*)0)->memName)
//struct S
//{
//	int i;
//	char c;
//	double d;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//	system("pause");
//	return 0;
//}