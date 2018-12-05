#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char i=0;
	scanf("%s", &i);
	if (i <= 90 && i >= 65)
	{
		i += 32;
		printf("%s", i);
	}
	else if (i <= 122 && i >= 97)
	{
		i -= 32;
		printf("%s", i);
	}
	system("pause");
	return 0;
}