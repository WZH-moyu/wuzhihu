//#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
using namespace std;
////int main()
////{
////	vector<int> v1;
////	int i = 0;
////	int sum = 0;
////	v1.resize(10);
////	while (i < 10)
////	{
////		cin >> v1[i]; 
////		i++;
////	}
////	sort(v1.begin(), v1.end());
////	int ret = v1.size();
////	for (int i = 0; i < ret; i++)
////	{
////		for (int j = i + 1; j < ret; j++)
////		{
////			if (v1[i] == v1[j])
////			{
////				sum++;
////				if (sum >= ret / 2)
////				{
////					cout << v1[i] << endl;
////					sum = 0;
////					i = j;
////					break;
////				}
////			}
////			else
////				break;
////		}
////	}
////	system("pause");
////	return 0;
////}
//int main()
//{
//	string s1;
//	
//	getline(cin, s1);
//	//char* start = s1.begin;
//	//char* end = s1.end;
//	int j = 0;
//	int start = 0;
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	int n = 0;
//	int s = 0;
//	int h = 0;
//	int arr[10] = { 0 };
//		string s2;
//		while (i<=s1.size())
//		{
//			//if (((int)(s1[i])) >= 48 && ((int)(s1[i])) <= 57)
//			if (s1[i] >= 48 && s1[i] <= 57)
//			{
//				sum++;
//				i++;
//				ret = sum;
//			}
//			else
//			{
//				sum = 0;
//				if (ret > sum)
//				{
//					arr[j] = ret;
//					j++;
//					arr[j] = start;
//					j++;
//				}	
//				i++;
//				start = i;
//				ret = sum;
//			}
//
////			{
////				i++;
////				sum++;
////				ret = sum;
////				if (ret>sum)
////				{
////					s2 = s1.substr(end, ret);
////				}
////			}
////			/*else if (ret > sum)
////			{
////				s2 = s1.substr(start, ret);
////			}*/
////			else
////			{
////				//	end = s1.begin + i;
////				end = start;
////				start = i;
////				i++;
////				sum = 0;
////			}
//
//		}
//
//		for ( s = 0; s <j; s += 2)
//		{
//			if (arr[s]>n)
//			{
//				n = arr[s];
//				h = s;
//			}
//		}
//		s2 = s1.substr(arr[h+1], arr[h]);
//	cout << s2 << endl;
//	system("pause");
//	return 0;
//}
int main()
{
	int num, n;
	cin >> num >> n;
	int arr[10] = { 0 };
	int y = 0;
	int i = 0;
	//arr[i] = 1;
	while (num>=n)
	{
		y = num%n;
		num= num / n;
		if (y > 0){
			arr[i] = y;
			y = 0;
		}
		else
			arr[i] = 0;
		i++;
	}
	if (y > 0)
		arr[i] = y;
	else
		arr[i] = num;
	for (int j = i; j >= 0; j--)
	{
		if (arr[j] == 15)
			cout << "F";
		else if (arr[j] == 14)
			cout << "E";
		else if (arr[j] == 13)
			cout << "D";
		else if (arr[j] == 12)
			cout << "C";
		else if (arr[j] == 11)
			cout << "B";
		else if (arr[j] == 10)
			cout << "A";
		else
			cout << arr[j];
	}
	cout << endl;
	system("pause");
	return 0;
}