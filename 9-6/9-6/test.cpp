//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(100);
//	v.push_back(300);
//	v.push_back(300);
//	v.push_back(500);
//	vector<int>::iterator itor;
//	for (itor = v.begin(); itor != v.end(); itor++)
//	{
//		if (*itor == 300)
//		{
//			itor = v.erase(itor);
//		}
//	}
//	for (itor = v.begin(); itor != v.end(); itor++)
//	{
//		cout << *itor << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<stdlib.h>
using namespace std;
/*void insertSort(int arr[], int n)
{
	int ret = 0;
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		ret = arr[i];
		j = i - 1;
		while (j >= 0 && ret < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = ret;
	}
}*/
//void insertSort(int arr[], int n);
//int partion(int arr[], int left, int right)
//{
//	int key = left;
//	int i = left, j = right;
//	while (i < j)
//	{
//		while (i < j && arr[i] < arr[key])
//			i++;
//		while (i<j && arr[j]>=arr[key])
//			j--;
//		if (i < j)
//		{
//			int ret = arr[i];
//			arr[i] = arr[j];
//			arr[j] = ret;
//		}
//	}
//	int tmp = arr[i];
//	arr[i] = arr[key];
//	arr[key] = tmp;
//	return i;
//}
//void quickSort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int div = partion(arr, left, right);
//		quickSort(arr, left, div);
//		quickSort(arr, div + 1, right);
//	}
//}
//int partion(int arr[], int start, int end);
//void quickSort(int arr[], int start, int end)
//
//
//
//{
//
//
//
//	if (start < end)
//
//
//
//	{
//
//
//
//		int div = partion(arr, start, end);
//
//
//
//		quickSort(arr, start, div-1);
//
//
//
//		quickSort(arr, div+1, end);
//
//
//
//	}
//
//
//
//}
//
//
//
//int partion(int arr[], int start, int end)
//
//
//
//{
//
//
//
//	int i = start, j = end;
//
//
//
//	int key = start;
//
//
//
//	while (i < j)
//
//
//
//	{
//
//
//
//		while (i < j && arr[j] >= arr[key])
//
//
//
//			j--;
//
//
//
//		while (i < j && arr[i] < arr[key])
//
//
//
//			i--;
//
//
//
//		if (i < j)
//
//
//
//		{
//
//
//
//			int ret = arr[i];
//
//
//
//			arr[i] = arr[j];
//
//
//
//			arr[j] = ret;
//
//
//
//		}
//
//
//
//
//
//
//
//	}
//
//
//
//	int tmp = arr[i];
//
//
//
//	arr[i] = arr[key];
//
//
//
//	arr[key] = tmp;
//
//
//
//	return i;
//
//
//
//}
//int partion(int arr[], int left, int right)
//{
//	int key = left;
//	int i = left, j = right;
//	while (i < j)
//	{
//		while (i < j && arr[i] < arr[key])
//			i++;
//		while (i < j && arr[j] >= arr[key])
//			j--;
//		if (i < j)
//		{
//			int ret = arr[j];
//			arr[j] = arr[i];
//			arr[i] = ret;
//		}
//	}
//	int tmp = arr[key];
//	arr[key] = arr[i];
//	arr[i] = tmp;
//	return i;
//}
//void quickSort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int div = partion(arr, left, right);
//		quickSort(arr, left, div);
//		quickSort(arr, div + 1, right);
//	}
//}
//void insertSort(int arr[], int n)
//{
//	int ret = 0;
//	int i = 0, j = 0;
//	for (i = i; i < n; i++)
//	{
//		ret = arr[i];
//		j = i - 1;
//		while (j >= 0 && arr[j] > ret)
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = ret;
//	}
//}
//void bubbleSort(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i-1; j >= 0; j--)
//		{
//			if (arr[j + 1] < arr[j])
//			{
//				int ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 21,23,3243,342,54,656,342,231,435,65,76,54,654,34 };
//	int n = sizeof(arr) / 4 ;
//	int m = 0;
//	//insertSort(arr, n);
//	//quickSort(arr, m, n);
//	bubbleSort(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
/*void insertSort(int arr[], int n)
{
	int i = 0, j = 0, ret = 0;
	for (int i = 1; i < n; i++)
	{
		ret = arr[i];
		j = i - 1;
		while (j >= 0 && ret < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = ret;
	}
}*/

////斐波那契非递归
//class Solution {
//public:
//	int Fibonacci(int n) {
//		if (n == 0)
//			return 0;
//		if (n == 1 || n == 2)
//			return 1;
//		int num1 = 1;
//		int num2 = 1;
//		int ret = 0;
//		for (int i = 3; i <= n; i++)
//		{
//			ret = num1 + num2;
//			num1 = num2;
//			num2 = ret;
//		}
//		return ret;
//	}
//};
////青蛙跳台阶变态
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number < 1)
//			return 0;
//		int ret = 1;
//		ret = pow(2, number - 1);
//		return ret;
//	}
//};
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number < 1)
//			return 0;
//		int ret = 1;
//		for (int i = 1; i < number; i++)
//		{
//			ret *= 2;
//		}
//		return ret;
//	}
//};
////青蛙跳台阶
//class Solution {
//public:
//	int jumpFloor(int number) {
//		if (number < 1)
//			return 0;
//		if (number == 1)
//			return 1;
//		if (number == 2)
//			return 2;
//		int ret1 = 1;
//		int ret2 = 2;
//		int tmp = 0;
//		for (int i = 3; i <= number; i++)
//		{
//			tmp = ret1 + ret2;
//			ret1 = ret2;
//			ret2 = tmp;
//		}
//		return tmp;
//	}
//};
//最大子序列和
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		if (array.empty())
//			return 0;
//		int sum = array[0];
//		int maxsum = array[0];
//		for (int i = 1; i < array.size(); i++)
//		{
//			sum = (sum > 0) ? sum + array[i] : array[i];
//			maxsum = (maxsum > sum) ? maxsum : sum;
//		}
//		return maxsum;
//	}
//};
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int F(int arr[])
//{
//	return sizeof(arr);
//}
//int M(int *arr)
//{
//	return sizeof(arr);
//}
//int S(int *arr)
//{
//	return sizeof(*arr);
//}
//int main()
//{
//	int arr[] = { 1,3,4,5,6,3,2,3,4,3 };
//	int n = F(arr);
//	int m = M(arr);
//	int s = S(*(&arr));
//	cout << n << m << s << endl;
//	system("pause");
//	return 0;
//}