////#include<iostream>
////#include<vector>
////#include<algorithm>
////int main()
////{
////	int num = 0;
////	while (std::cin >> num)
////	{
////		long long sum = 0;
////		std::vector<long long> v;
////		v.resize(3 * num);
////		for (int i = 0; i < v.size(); i++)
////		{
////			std::cin >> v[i];
////		}
////		std::sort(v.begin(), v.end());
////		for (int i = num; i <= v.size() - 2; i += 2)
////			sum += v[i];
////		std::cout << sum << std::endl;
////	}
////	return 0;
////}
////#include<iostream>
////#include<string>
////int main()
////{
////	std::string s1;
////	std::string s2;
////	getline(std::cin, s1);
////	getline(std::cin, s2);
////	int hashtable[256] = { 0 };
////	for (int i = 0; i < s2.size(); i++)
////	{
////		hashtable[s2[i]]++;
////	}
////	std::string ret;
////	for (int i = 0; i < s1.size(); i++)
////	{
////		if (hashtable[s1[i]] == 0)
////			ret += s1[i];
////	}
////	std::cout << ret << std::endl;
////	return 0;
////}
////#include<iostream>
////#include<vector>
////int main()
////{
////	int n = 0;
////	while (std::cin >> n)
////	{
////		int ret = 1;
////		std::vector<int> v;
////		v.resize(n);
////		for (int i = 0; i < n; i++)
////		{
////			std::cin >> v[i];
////		}
////		for (int i = 1; i < n - 1; i++)
////		{
////			if ((v[i - 1] < v[i] && v[i] > v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1]))
////			{
////				ret++;
////				if (i != n - 3)
////					i++;
////			}
////		}
////		std::cout << ret << std::endl;
////	}
////	return 0;
//////}
////#include<iostream>
////#include<string>
////int main()
////{
////	std::string s1;
////	std::string s2;
////	std::cin >> s2;
////	while (std::cin >> s1)
////		s2 = s1 + " " + s2;
////	std::cout << s2 << std::endl;
////	return 0;
////}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	getline(cin, s1);
//	reverse(s1.begin(), s1.end());
//	int ret = 0;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] == ' ')
//		{
//			reverse(s1[ret], s1[i - 1]);
//			ret = i;
//		}
//		cout << s1 << endl;
//	}
//	return 0;
//}
//最大子序列和
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		if (array.empty()) {
//			return -1;
//		}
//		// F(i)初始化
//		int sum = array[0];
//		// maxsum初始化
//		int maxsum = array[0];
//		for (int i = 1; i < array.size(); i++) {
//			// F(i) = max(F(i-1) + array[i]，array[i])
//			sum = (sum > 0) ? sum + array[i] : array[i];
//			// maxsum = max( maxsum，F(i))
//			maxsum = (sum < maxsum) ? maxsum : sum;
//		}
//		return maxsum;
//	}
//};
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
//int partion(int v[], int left, int right)
//{
//	int key = left;
//	int i = left;
//	int j = right;
//	while (i < j)
//	{
//		while (i < j && v[i] < v[key])
//			i++;
//		while (i<j&&v[j]>=v[key])
//			j--;
//		if (i < j)
//		{
//			int ret = v[i];
//			v[i] = v[j];
//			v[j] = ret;
//		}
//	}
//	int num = v[key];
//	v[key] = v[i];
//	v[i] = num;
//	return i;
//}
//void quickSort(int v[], int start, int end)
//{
//	if (start < end)
//	{
//		int div = partion(v, start, end);
//		quickSort(v, start, div);
//		quickSort(v, div + 1, end);
//	}
//}
void insertSort(int arr[], int n)
{
	int i = 0, j = 0;
	int ret = 0;
	for (i = 1; i < n; i++)
	{
		ret = arr[i];
		j = i - 1;
		while(j>=0&&arr[j]>ret)
		{
				arr[j + 1] = arr[j];
				j--;
		}
		arr[j + 1] = ret;
	}
}
int main()
{
	int arr[] = { 100,3,4,6,7,321,3424,4324,4324,656,32,65,32,657,3243,5645,3423 };
	//quickSort(arr, 0, sizeof(arr)/4-1);
	insertSort(arr, sizeof(arr) / 4);
	for (int i = 0; i < sizeof(arr) / 4; i++)
		cout << arr[i] << ' ';
	cout << endl;
	system("pause");
	return 0;
}