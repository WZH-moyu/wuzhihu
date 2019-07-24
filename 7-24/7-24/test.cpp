#include<stdio.h>
#include<stdlib.h>
void Swap(int *a, int *b)
{
	/**a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;*/
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
int Parition(int array[], int left, int right)
{
	int begin = left;
	int end = right;
	while (begin < end)
	{
		while (begin < end && array[begin] <= array[end])
			begin++;
		while (begin < end && array[end] >= array[right])
			end--;
		Swap(array + begin, array + end);
	}
	Swap(array + begin, array + right);
	return begin;
}
void Quicksort(int array[],int left,int right)
{
	if (left == right)
		return;
	if (left > right)
		return;
	int div;
	div = Parition(array,left,right);
	Quicksort(array, left, div-1);
	Quicksort(array, div + 1, right);
}
int main()
{
	int array[10] = { 12,3,6,45,48,521,23,12,3,10 };
	int left = 0;
	int right = 9;
	Quicksort(array, left, right);
	for (int i = 0; i < 10; i++)
	{
		printf("%4d", array[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}