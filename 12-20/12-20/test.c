#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
// 打印数组，方便观察结果
void print_array(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

// 冒泡排序算法
void bubble_sort(int a[], int n)
{
	// j表示第几轮比较
	for (int j = 0; j < n - 1; j++)
	{
		// i表示待比较的第几个元素
		for (int i = 0; i < n - 1 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				a[i] ^= a[i + 1];
				a[i + 1] ^= a[i];
				a[i] ^= a[i + 1];
			}

			// 打印每一轮比较，每次交换后的结果
			print_array(a, n);
		}
		printf("********************\n");
	}
}

int main()
{
	int a[] = { 5, 4, 3, 2, 1 };
	int count = sizeof(a) / sizeof(int); // 求数组元素个数
	bubble_sort(a, count);
	system("pause");
	return 0;
}