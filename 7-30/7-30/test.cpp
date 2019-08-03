//#include<iostream>
#include<cstdlib>
//using namespace std;
//int main()
//{
//	int array[10] = { 1,2,3,4,5,6,7,8,5,1 };
//	cout << sizeof(array[0]) << sizeof(array) / sizeof(array[10]) << endl;
//	system("pause");
//	return 0;
//}
#include<stdio.h>
void Swap(int* num1, int* num2)
{
	int ret = *num1;
	*num1 = *num2;
	*num2 = ret;
}
//int Partion(int* array, int left, int right)
//{
//	int key = array[right - 1];
//	int cur = left;
//	int pre = cur - 1;
//	while (cur < pre)
//	{
//		if (array[cur] < key && ++pre != cur)
//		{
//			Swap(&array[cur], &array[pre]);
//			cur++;
//		}
//	}
//	if (++pre != right -1)
//	{
//		Swap(&array[pre], &array[right-1]);
//	}
//	return pre;
//}
//void QuickSort(int* array, int left, int right)
//{
//	if (right - left > 1)
//	{
//		int div = Partion(array, left, right);
//		QuickSort(array, left, div);
//		QuickSort(array, div + 1, right);
//	}
//}
//}
#include<cassert>
void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0 && a[end] > tmp)
		{
			a[end + 1] = a[end];
			--end;
		}
		a[end + 1] = tmp;
	}
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = begin + ((end - begin) >> 1);
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] > a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
	else // begin > mid
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else if (a[begin] < a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}

}
int PartSort3(int* a, int begin, int end)
{
	int midindex = GetMidIndex(a, begin, end);
	Swap(&a[begin], &a[midindex]);

	int key = a[begin];
	int prev = begin;
	int cur = begin + 1;

	while (cur <= end)
	{
		// cur找小，把小的往前翻，大的往后翻
		if (a[cur] < key && ++prev != cur)
			Swap(&a[cur], &a[prev]);

		++cur;
	}

	Swap(&a[begin], &a[prev]);

	return prev;
}

// []
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;

	if (right - left + 1 < 10)
	{
		InsertSort(a + left, right - left + 1);
	}
	else
	{
	int div = PartSort3(a, left, right);
	/*[left, div-1]
	[div+1, right]*/
	QuickSort(a, left, div - 1);
	QuickSort(a, div + 1, right);
	}
}
int main()
{
	int array[10] = { 3,4,7,6,12,8,21,32,9,10 };
	QuickSort(array, 0, sizeof(array) / sizeof(array[0]));
	for (int i = 1; /*i < sizeof(array) / sizeof(array[0]); i++*/i<=10;i++)
	{
		printf("%3d", array[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}