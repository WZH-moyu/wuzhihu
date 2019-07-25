//// write your code here cpp
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	string s1, s2,s3,s4;
//	int count = 0;
//	while (cin >> s3 >> s4)
//	{
//		if (s3.size() > s4.size())
//		{
//			s1 = s4;
//			s2 = s3;
//		}
//		else
//		{
//			s1 = s3;
//			s2 = s4;
//		}
//		vector<vector<int>> v(s1.size() + 1, vector<int>(s2.size() + 1, 0));
//		for (int i = 1; i < s1.size() + 1; i++)
//			v[i][0] = s1[i - 1];
//		for (int j = 1; j < s2.size() + 1; j++)
//			v[0][j] = s2[j - 1];
//		for (int i = 1; i < s1.size() + 1; i++)
//		{
//			for (int j = 1; j < s2.size() + 1; j++)
//			{
//				if (v[i][0] == v[0][j])
//					v[i][j] = 1;
//			}
//		}
//		//if (s1.size() > s2.size())
//		//{
//			for (int i = 1; i < s1.size() + 1; i++)
//			{
//				for (int j = 1; j < s2.size() + 1; j++)
//				{
//					if (v[i][j] == 1)
//					{
//						count++;
//						break;
//					}
//				}
//			}
//		//}
//		//else
//		//{
//		//	for (int i = 1; i < s2.size() + 1; i++)
//		//	{
//		//		for (int j = i; j < s1.size() + 1; j++)
//		//		{
//		//			if (v[i][j] == 1)
//		//			{
//		//				count++;
//		//				break;
//		//			}
//		//		}
//		//	}
//		////}*/
//		cout << count << endl;
//		s1.clear();
//		s2.clear();
//		s3.clear();
//		s4.clear();
//	}
//	return 0;
//}