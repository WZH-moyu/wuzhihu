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
int partion(int arr[], int start, int end);
void quickSort(int arr[], int start, int end)



{



	if (start < end)



	{



		int div = partion(arr, start, end);



		quickSort(arr, start, div-1);



		quickSort(arr, div+1, end);



	}



}



int partion(int arr[], int start, int end)



{



	int i = start, j = end;



	int key = start;



	while (i < j)



	{



		while (i < j && arr[j] >= arr[key])



			j--;



		while (i < j && arr[i] < arr[key])



			i--;



		if (i < j)



		{



			int ret = arr[i];



			arr[i] = arr[j];



			arr[j] = ret;



		}







	}



	int tmp = arr[i];



	arr[i] = arr[key];



	arr[key] = tmp;



	return i;



}

int main()
{
	int arr[] = { 21,23,3243,342,54,656,342,231,435,65,76,54,654,34 };
	int n = sizeof(arr) / 4 -1;
	int m = 0;
	//insertSort(arr, n);
	quickSort(arr, m, n);
	for (int i = 0; i <=n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
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