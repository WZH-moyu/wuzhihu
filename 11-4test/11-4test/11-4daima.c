#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 100;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j<i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
int main()
{
	int *p=&a;
	int a;
	scanf("%d", &a);
	*p = a;
	printf("%d\n", *p);
	system("pause");
	return 0;
}