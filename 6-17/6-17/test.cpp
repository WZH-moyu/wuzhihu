//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		// write code here
//		sort(gifts.begin(), gifts.end());
//		int count = 1;
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (gifts[i] == gifts[i + 1])
//			{
//				count++;
//			}
//			else
//			{
//				count = 1;
//			}
//			if (count > n / 2)
//			{
//				return gifts[i];
//			}
//		}
//		return 0;
//	}
//};
//	//int main()
//	//{
//	//	vector<int> v;
//	//	v.resize(5);
//	//	int n = 0;
//	//	for (int i = 0; i < 5; i++)
//	//	{
//	//		cin >> v[i];
//	//	}
//	//	cin >> n;
//	//	int ret = 0;
//	//	ret=getValue(v, n);
//	//	cout << ret;
//	//	return 0;
//	//}
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	vector<int> v;
//	string s3;
//	while (cin >> s1 >> s2)
//	{
//		int count = 0;
//		if (s2.size() > s2.size())
//		{
//			s3 = s1;
//			s1 = s2;
//			s2 = s3;
//		}
//		v.resize(s1.size());
//		for (int i = 0; i < s1.size(); i++)
//		{
//			if (s2[i] != s1[i])
//			{
//				count++;
//			}
//		}
//		for (int i = 0; i < s1.size(); i++)
//		{
//			if (v[i] == 1)
//				count++;
//		}
//		cout << s1.size() - count << endl;
//		s1.clear();
//		s2.clear();
//		s3.clear();
//	}
//	return 0;
//}