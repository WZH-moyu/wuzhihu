#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int i, j;
	int temp;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			temp = i*j;
			printf("%2d * %2d=%3d",j,i ,temp);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}