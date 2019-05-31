#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0, j = 0;
	for (i = sz - 1; i > 0; i--)
	{
		int flag = 1;
		for (j = 0; j < i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(int);
	BubbleSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}