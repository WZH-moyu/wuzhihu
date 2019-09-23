#include<iostream>
#include<stdlib.h>
using namespace std;
//void CreateHeap(int arr[], int sz);
//void AdjustDown(int arr[], int sz, int root);
//void Swap(int *a, int *b)
//{
//	int n = *a;
//	*a = *b;
//	*b = n;
//}
//void AdjustDown(int arr[], int sz, int root)
//{
//	int i = 2 * root + 1;
//	int j = 2 * root + 2;
//	if (j >= sz)
//		return;
//	int m = i;
//	if (j > i && arr[m] > arr[j])
//		m = j;
//	if (arr[m] < arr[root])
//	{
//		Swap(arr + m, arr + root);
//		AdjustDown(arr, sz, m);
//	}
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
//		Swap(arr, arr + sz - i - 1);
//		AdjustDown(arr, sz - i - 1, 0);
//	}
//}
//void AdjustDown(int arr[], int sz, int root)
//
//
//
//{
//
//
//
//	int i = 2 * root + 1;
//
//
//
//	int j = 2 * root + 2;
//
//
//
//	if (j >= sz)
//
//
//
//		return;
//
//
//
//	int m = i;
//
//
//
//	if (i < j && arr[j] < arr[m])
//
//
//
//		m = j;
//
//
//
//	if (arr[m] < arr[root])
//
//
//
//	{
//
//
//
//		Swap(arr + m, arr + root);
//
//
//
//		AdjustDown(arr, sz, m);
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
//void CreateHeap(int arr[], int sz)
//
//
//
//{
//
//
//
//	for (int i = (sz - 2) / 2; i >= 0; i--)
//
//
//
//	{
//
//
//
//		AdjustDown(arr, sz, i);
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
//void HeapSort(int arr[], int sz)
//
//
//
//{
//
//
//
//	CreateHeap(arr, sz);
//
//
//
//	for (int i = 0; i < sz; i++)
//
//
//
//	{
//
//
//
//		Swap(arr, arr + sz - i - 1);
//
//
//
//		AdjustDown(arr, sz - i - 1, 0);
//
//
//
//	}
//
//
//
//}
//int partion(int arr[], int left, int right)
//{
//	int i = left, j = right, key = left;
//	while (i < j)
//	{
//		while (i < j && arr[i] < arr[key])
//			i++;
//		while (i < j && arr[j] >= arr[key])
//			j--;
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
//	if (right > left)
//	{
//		int div = partion(arr, left, right);
//		//QuickSort(arr, left, div - 1);
//		//QuickSort(arr, div + 1, right);
//	}
//}
//int main()
//{
//	int arr[] = { 49,38,65,97,76,13,27,49 };
//	int sz = sizeof(arr) / sizeof(int);
//	//HeapSort(arr, sz);
//	QuickSort(arr, 0, sz - 1);
//	cout << sz << endl;
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//int gcd(int a, int b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//struct stsort {
//	bool operator () (const int a, const int b) const {
//		if (gcd(30, a) < gcd(30, b)) {
//			return 1;
//		}
//		else if (gcd(30, a) == gcd(30, b)) {
//			return a < b;
//		}
//		else return 0;
//	}
//};
//int main() {
//	int n = 5;
//	priority_queue<int, vector<int>, stsort>q;
//	for (int i = 1; i <= n; ++i) {
//		q.push(i);
//	}
//	for (int i = 1; i <= n; ++i) {
//		printf("%d", q.top());
//		q.pop();
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class A
//{
//	A()
//	{
//		printf("A()");
//	}
//public:
//	inline static void fun();
//	static A &get()
//	{
//		static A a;
//		return a;
//	}
//};
//int main()
//{
//	A::get();
//	return 0;
//}
//#include "stdio.h"
//#include "string.h"
//#define N 10
//int main()
//{
//	char s[N][81], *t;                                            
//		int j;                                                              
//		for (j = 0; j < N; j++)                                          
//			gets(s[j]);                                                   
//			t = *s;                                                             
//			for (j = 1; j < N; j++)                                          
//				if (strlen(t) < strlen(s[j]))                               
//					t = &s[j];                                                           
//					printf("strings is: %d, %s\n", strlen(t), t);         
//}
#include <iostream>
using namespace std;
double power(double x, int n)
{
	double val = 1.0;
	while (n--)  val *= x;
	return(val);
}
int main()
{
	int  i;
	int  value = 0;
	char ch;
	for (i = 7; i >= 0; i--)
	{
		cin >> ch;
		if (ch=='1')
			value += power(2, i);
	}
	cout << value << endl;
}