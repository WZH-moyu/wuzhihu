#include<iostream>
#include<vector>
#include<string>
using namespace std;
void Swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
//class Solution {
//public:
//	void reverseString(vector<char>& s) {
//		if (s.empty())
//			cout << NULL << endl;
//		else {
//			int start = 0;
//			int end = s.size - 1;
//			while (start < end)
//			{
//				int ret = start;
//				s[start] = s[end];
//				s[end] = ret;
//				end--;
//				start++;
//			}
//			for (int i = 0; i < s.size(); i++)
//			{
//				cout << s[i] << " ";
//			}
//		}
//
//
//	}
//};
//class Solution {
//public:
//	void reverseString(vector<char>& s) {
//		if (s.empty())
//			return;
//		recursive(s, 0, s.size() - 1);
//	}
//
//
//	void recursive(vector<char> &s, int start, int end) {
//		if (start > end)
//			return;
//		recursive(s, start + 1, end - 1);
//		swap(s[start], s[end]);
//	}
//
//};
//int main()
//{
//	Solution s;
//	vector<char> rs = {'h','e','l','l','o'};
//	vector<char> &s = rs;
//	Solution::reverseString(s);
//}
//class Solution {
//public:
//	void reverseString(vector<char>& s) {
//		if (s.empty())
//			return;
//		recursive(s, 0, s.size() - 1);
//	}
//
//
//	void recursive(vector<char> &s, int start, int end) {
//		while (start < end)
//		{
//			swap(s[start], s[end]);
//			start++;
//			end--;
//		}
//	}
//
//};
//void InsertSort(int arr[],int sz)
//{
//	int j = 0;
//	int ret = 0;
//	for (int i = 1; i < sz; i++)
//	{
//		j = i - 1;
//		ret = arr[i];
//		while (j >= 0 && ret < arr[j])
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = ret;
//	}
//}
//void BubbleSort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = i; j >= 0; j--)
//		{
//			if (arr[j] < arr[j - 1])
//				swap(arr[j], arr[j - 1]);
//		}
//	}
//}
//int partion(int arr[], int left, int right)
//{
//	int i = left, j = right;
//	int key = left;
//	while (i < j)
//	{
//		while (i < j && arr[i] < arr[key])
//		{
//			i++;
//		}
//		while (i < j && arr[j] >= arr[key])
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			swap(arr[i], arr[j]);
//		}
//	}
//	swap(arr[i], arr[key]);
//	return i;
//}
//void QuickSort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int div = partion(arr, left, right);
//		QuickSort(arr, left, div);
//		QuickSort(arr, div+1, right);
//	}
//}
// 堆排序（建大堆）
// 时间复杂度：
// 最好|平均|最坏	O(n*log(n))
// 空间复杂度 O(1)
// 不稳定	（向下调整过程中，无法保证相等数前后关系）
// 向下调整
// 时间复杂度 O(log(n))
//void AdjustDown(int array[], int size, int root)
//{
//	int i = 2 * root + 1;
//	int j = 2 * root + 2;
//	if (i >= size) {
//		return;
//	}
//
//	int m = i;
//	if (j < size && array[j] > array[i]) {
//		m = j;
//	}
//
//	if (array[m] > array[root]) {
//		Swap(array + m, array + root);
//		AdjustDown(array, size, m);
//	}
//}
//// 建堆
//// O(n) or O(n * log(n))
//void CreateHeap(int array[], int size)
//{
//	for (int i = (size - 2) / 2; i >= 0; i--) {
//		AdjustDown(array, size, i);
//	}
//}
//// 堆排序
//void HeapSort(int array[], int size)
//{
//	CreateHeap(array, size);
//
//	for (int i = 0; i < size; i++) {
//		Swap(array, array + size - i - 1);
//		AdjustDown(array, size - 1 - i, 0);
//	}
//}
//void AdjustDown(int arr[], int sz, int root)
//{
//	int i = 2 * root + 1;
//	int j = 2 * root + 2;
//	if (j >= sz)
//		return;
//	int m = i;
//	if (j < sz && arr[j] > arr[i])
//		m = j;
//	if (arr[m] > arr[root])
//	{
//		Swap(arr + m, arr + root);
//		AdjustDown(arr, sz, m);
//	}
//	
//}
//void CreateHeap(int arr[], int sz)
//{
//	for (int i = (sz - 2) / 2; i >= 0; i--)
//	{
//		AdjustDown(arr, sz, i);
//	}
//}
//void HeapSort(int arr[], int sz)
//{
//	CreateHeap(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		Swap(arr, arr + sz - 1 - i);
//		AdjustDown(arr, sz - 1 - i, 0);
//	}
//}
void AdjustDown(int arr[], int sz, int root)
{
	int i = 2 * root + 1;
	int j = 2 * root + 2;
	if (j >= sz)
		return;
	int m = i;
	if (i < j && arr[j] > arr[i])
	{
		m = j;
	}
	if (arr[m] > arr[root])
	{
		Swap(arr + m, arr + root);
		AdjustDown(arr, sz, m);
	}
}
void CreateHeap(int arr[], int sz)
{
	for (int i = (sz - 2) / 2; i >= 0; i--)
	{
		AdjustDown(arr, sz, i);
	}
}
void HeapSort(int arr[], int sz)
{
	CreateHeap(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		Swap(arr, arr + sz - i - 1);
		AdjustDown(arr, sz - i - 1, 0);
	}
}
int main()
{
	int arr[] = { 21,23,43,54,42,765,23,45,231,654,432,657,323,543,23 };
	int sz = sizeof(arr) / 4;
	//InsertSort(arr,sz);
	//BubbleSort(arr, sz);
	//QuickSort(arr, 0, sz);
	HeapSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}