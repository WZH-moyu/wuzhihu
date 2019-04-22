//#include<iostream>
//#include<stdlib.h>
//#include<string>
//using namespace std;
//class Solution
//{
//public:
//	string addStrings(string num1, string num2)
//	{
//		string s[5100] = {0};
//		string::iterator it1 = num1.end() - 1;
//		string::iterator it2 = num2.end() - 1;
//		while ((it1!=num1.begin())||(it2!=num2.begin()))
//		{
//			int next = 0;
//			
//			
//		}
//	}
//};
//class Solution {
//public:
//	string addStrings(string num1, string num2) {
//		int end1 = num1.size() - 1, end2 = num2.size() - 1;
//		string retstr;
//		retstr.reserve(num1.size()>num2.size() ? num1.size() + 1 : num2.size() + 1);
//		char next = 0;
//		while (end1 >= 0 || end2 >= 0)
//		{
//			char value1 = 0;
//			if (end1 >= 0)
//				value1 = num1[end1] - '0';
//			char value2 = 0;
//			if (end2 >= 0)
//				value2 = num2[end2] - '0';
//			int addvalue = value1 + value2 + next;
//			if (addvalue > 9)
//			{
//				next = 1;
//				addvalue -= 10;
//			}
//			else
//			{
//				next = 0;
//			}
//			//retstr.insert(retstr.begin(), addvalue + '0');
//			retstr += (addvalue + '0');
//			--end1;
//			--end2;
//		}
//		if (next == 1)
//		{
//			retstr += '1';
//			//retstr.insert(retstr.begin(), '1');
//		}
//		reverse(retstr.begin(), retstr.end());
//		return retstr;
//	}
////};
//
//int main()
//{
//	system("pause");
//	return 0;
//}