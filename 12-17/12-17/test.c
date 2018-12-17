#define _CRT_SECURE_NO_WARNINGS 
//预指令:条件成立才编译
//#pragma once(头文件只引用一次，防止预编译时重复调用头文件包含的内容，造成代码冗余)
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 10;
//#if 0
//	printf("%d\n", a);
//#endif
//	system("pause");
//	return 0;
//}
//int main()
//{
//#if 1==2
//	printf("1=2\n");
//#elif 2==3
//	printf("2=3\n");
//#elif 3==3
//	printf("3=3\n");
//#endif
//	system("pause");
//	return 0;
//}
#define N 10
//int main()
//{
//#ifdef N
//	printf("定义了\n");
//#else
//	printf("没定义\n");
//#endif
//	system("pause");
//	return 0;
//}
//int main()
//{
//#ifndef N
//	printf("没定义\n");
//#else
//	printf("定义了\n");
//#endif
//	system("pause");
//	return 0;
//}