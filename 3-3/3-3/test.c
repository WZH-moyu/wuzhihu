#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//排序
//插入排序-->希尔排序（插入排序的优化版本，再插入排序之前使之尽可能地有序；即：分组插排 gap=（gap/3）+1）
//选择排序（直接选择排序、堆排序）
void AdjustDown(int array[], int size, int root)
{
	int left = 2 * root + 1;
	int right = 2 * root + 2;
	if (left >=size){
		return;
		}
	    int max = left;
		if (right < size && array[right]>array[left]){
			max = right;
		}
		if (array[max]>array[root]){
			int temp = array[max];
			array[max] = array[root];
			array[root] = temp;
		}
		AdjustDown( array, size, max);
}
//冒泡排序
//快速排序(空间复杂度O（log n）--O（n）)
//在排序的区间内选择一个基准值，比如最后的一个数；
//遍历整个区间，做一些交换，达到效果，比基准值小的放到基准值左侧比基准值大的放到基准值右侧；
//分治算法：把一个问题变成两个同样的小问题；
//分治算法用递归（或者非递归）递归的终止算法： 
//1、分出来的小区间没有数，分出的区间size==0。2、分出来的小区间已经有序，分出的区间size==1
//Hover法
int Parition(int array[], int left, int right){//基准值在右，左先走
	int begin = left;
	int end = right;//不能等于right-1
	//基准值是array[right];
	while (begin < end){
		//优先走左边
		while (begin < end&&array[begin] <= array[right]){
			begin++;
		}
		//一定是左边卡住了
		//在走右边
		while (begin < end&&array[end] >= array[right]){
			end--;
		}
		//右边卡住了
		Swap(array + begin, array + end);
	}
	Swap(array + begin, array + right);
	return begin;
}
//挖坑法
int Parition(int array[],int left,int right)
{
	int begin = left;
	int end = right;
	int pivot= array[right];
	while (end > begin)
	{
		while (begin < end && array[begin] <= pivot)
		{
			begin++;
		}
		array[end] = array[begin];
		while (begin < end&&array[end] >= pivot){
			end--;
		}
		array[begin] = array[end];
	}
	array[begin] = pivot;
}
//双指针法
int Parition(int array[], int left, int right)
{
	int i = left;
	int d = left;
	for (i = left; i < right; i++)
	{

	}
}
//
//归并排序（合并排序）
//把一个数组看成左右两个小数组即[left,mid)和[mid,right]
//假设这两个数组已经有序，可以把这两个数组合并成一个数组
//可以对外部数据排序
//
void _MergeSort(int array[], int left, int right)
{

}
void MergeSort(int array[], int size){
	_MergeSort(array, 0, size);
}