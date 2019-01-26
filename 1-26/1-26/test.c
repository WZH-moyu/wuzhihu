#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	system("pause");
	return;
}

int BinarySearch(int arr[], int sz, int key)

{

	int left = 0;

	int right = sz - 1;

	int mid = 0;

	while (left <= right)

	{

		mid = (left - right) / 2 + right;

		if (key < arr[mid])

		{

			right = mid;

		}

		else if (key > arr[mid])

		{

			left = mid;

		}

		else

		{

			return mid;

		}

	}

	return -1;

}



int main()

{

	int arr[] = { 9, 5, 4, 7, 6, 8, 1, 2, 3 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	int key = 6;

	int ret = 0;

	BubbleSort(arr, sz);



	for (int i = 0; i < sz; i++)

	{

		printf("%d ", arr[i]);

	}

	printf("\n");

	ret = BinarySearch(arr, sz, key);



	printf("%d µÄÏÂ±êÎª%d\n", key, ret);



	system("pause");

	return 0;



}