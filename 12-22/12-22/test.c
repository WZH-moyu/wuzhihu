#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
void bubble(int *arr, int sz)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
}
int binarysearch(const int *arr, int sz, int ret)
{
	int right = 0;
	int left = sz;
	int s = 0;
	while (right < left)
	{
		s = (left - right) / 2 + right;
		if (ret>arr[s])
		{
			right = s+1 ;
		}
		else if (ret < arr[s])
		{
			left = s;
		}
		else
		{
			return s;
		}
	}
	return -1;
}
int main()
{
	int sz = 10;
	int ret = 0;
	int s = 0;
	int arr[10] = { 1, 5, 9, 3, 2, 4, 7, 6, 0, 8 };
	bubble(arr, sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	scanf("%d", &ret);
	s = binarysearch(arr, sz, ret);
	printf("%d\n", s);
	system("pause");
	return 0;
}