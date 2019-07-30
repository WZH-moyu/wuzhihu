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
int Partion(int* array, int left, int right)
{
	int key = array[right - 1];
	int cur = left;
	int pre = cur - 1;
	while (cur < pre)
	{
		if (array[cur] < key && ++pre != cur)
		{
			Swap(&array[cur], &array[pre]);
			cur++;
		}
	}
	if (++pre != right -1)
	{
		Swap(&array[pre], &array[right-1]);
	}
	return pre;
}
void QuickSort(int* array, int left, int right)
{
	if (right - left > 1)
	{
		int div = Partion(array, left, right);
		QuickSort(array, left, div);
		QuickSort(array, div + 1, right);
	}
}
int main()
{
	int array[10] = { 3,4,7,6,12,8,21,32,9,10 };
	QuickSort(array, 0, sizeof(array) / sizeof(array[0]));
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		printf("%3d", array[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
