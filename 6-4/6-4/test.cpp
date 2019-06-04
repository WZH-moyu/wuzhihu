////#define _CRT_SECURE_NO_WARNINGS
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> v1;
//	int n = 0;
//	cin >> n;
//	v1.resize(n);
//	int arr[100] = { 0 };
//	int sum = 0;
//	int ret = 1;
//	int j = 0;
//	int count=0;
//	int m = n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr+n);
//	while (m)
//	{
//		m--;
//		j++;
//		for (int i = j; i < n; i++)
//		{
//			sum += arr[i];
//			ret = arr[i]*ret;
//		}
//		if (sum>ret)
//		{
//			count++;
//			sum = 0;
//			ret = 1;
//		}
//		else
//			break;
//	}
//	cout << ++count << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace ::std;
int main()
{
	int days[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	int year, month, day;
	while (cin >> year >> month >> day){
		int total = days[month - 1] + day;
		if (month>2){
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
				total += 1;
			}
		}
		cout << total << endl;
	}
	return 0;
}