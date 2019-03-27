#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
#include<list>
#include<map>
using namespace std;
////template<class T>
////void Swap(T& left, T& right)
////{
////	T tmp = left;
////	left = right;
////	right = tmp;
////}
//int main()
//{
//	int a = 1, b = 2;
//	double c = 2.22, d = 3.33;
//	swap(a, b);
//	swap(c, d);
//	cout << a << " " << b << " " << c << " " << d << endl;
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		cout << v1[i] << endl;
//	}
//	system("pause");
//	return 0;
//}
//typedef basic_string<char> string;
//int main()
//{
//	string s1("hello word");
//	s1[0] = 'x';
//	s1.push_back(' ');
//	s1.append("word");
//	s1 += ' ';
//	s1 += "word";
//	cout << s1 << endl;
//	for (size_t i = 0; i < s1.size(); ++i)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//class Solution {
//public:
//	void reverseString(vector<char>& s) {
//		int begin = 0;
//		int end = s.size() - 1;
//		while (begin<end)
//		{
//			swap(s[begin], s[end]);
//			++begin;
//			--end;
//		}
//	}
//};
//int main()
//{
//	char str[] = "背锅";
//	//str[3] = -70;
//	cout << sizeof(str) << endl;
//	cout << strlen(str) << endl;
//	cout << str << endl;
//	cout << sizeof(wchar_t) << endl;
//	system("pause");
//	return 0;
//}
//void test_string1()
//{
//	string s1;
//	string s2("hello");
//	string s3(s2);
//	string s4 = "word";//explicit
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//}
////1.迭代器--不常用，跟其他容器保持统一的访问方式
//void test_string2()
//{
//	string num("1234");
//	//迭代器给出了统一的方式访问容器,屏蔽掉底层复杂的结构细节
//	string::iterator it =num.begin();
//	int value = 0;
//	while (it != num.end())
//	{
//		/*cout << *it << " ";
//		++it;*/
//		value *= 10;
//		value += *it - '0';
//		++it;
//	}
//	cout << value<<endl;
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	vector<int>::iterator vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	cout << endl;
//	list<int> l;
//	l.push_back(10);
//	l.push_back(12);
//	l.push_back(13);
//	l.push_back(14);
//	list<int>::iterator lit = l.begin();
//	while (lit != l.end())
//	{
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;
//
//}
//int StrToNum(const string& str)
//{
//	int value=0;
//	string::const_iterator it = str.cbegin();
//	while (it != str.cend())
//	{
//		value *= 10;
//		value += (*it - '0');
//		++it;
//	}
//	return value;
//
//}
////反向迭代器
//void test_string3()
//{
//	string num("1234");
//	string::reverse_iterator rit = num.rbegin();
//	while (rit != num.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//	cout<< StrToNum(num)<<endl;
//}
////2.for+下标--更常用
//int StrToNum(const string& str)
//{
//	int value = 0;
//	for (size_t i = 0; i < str.size(); ++i)
//	{
//		value *= 10;
//		value += (str[i]- '0');
//	}
//	return value;
//
//}
//////3.C++11 语法糖式的for
//int StrToNum(const string& str)
//{
//	int value = 0;
//	for (auto e : str)
//	{
//		value *= 10;
//		value += (e- '0');
//	}
//	return value;
//
//}
//int StrToNum(const string& str)
//{
//	int value = 0;
//	for (auto e : str)
//	{
//		value *= 10;
//		value += (e- '0');
//	}
//	//Map容器
//	std::map<std::string, std::vector<std::string>> strVMap;
//	std::map<std::string, std::vector<std::string>>::const_reverse_iterator svmit = strVMap.crbegin();
//	while (svmit != strVMap.crend())
//	{
//		++svmit;
//	}
//	//for
//	for (auto e : strVMap)
//	{
//
//	}
//	return value;
//
//}
//void test_string4()
//{
//	//新的访问方式
//	//1.迭代器--不常用，跟其他容器保持统一的访问方式
//	//2.for+下标--更常用
//	//3.C++11 语法糖式的for
//	string num("1234");
//	cout << StrToNum(num) << endl;
//}
//void test_string5()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	s.reserve(50);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	s.resize(51,'1');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	string s1("hello Bit");
//	s1[6] = 'w';
//	s1[7] = 'o';
//	s1[8] = 'r';
//	s1[9] = 'd';
//	cout << s1 << endl;
//}
//void test_string6()
//{
//	string s1;
//	s1 = ("hello");
//	s1.append(" word");
//	s1 += " word";
//	s1.insert(s1.begin(), 'x');
//	s1.insert(0, "bit-" );
//	s1.erase(0, 3);
//	string s2;
//	s2 = ("!!!!!!!!!");
//	s1 += s2;
//	cout << s1 << endl;
//	cout << s1.c_str() << endl;
//	string num("111");
//	int value = atoi(num.c_str());
//	cout << value << endl;
//}
//void test_string7()
//{
//	string file("test.cpp");
//	size_t pos=file.rfind('.');
//	if (pos == string::npos)
//	{
//		cout << "文件没有后缀" << endl;
//	}
//	else
//	{
//		cout << file.substr(pos, file.size() - pos)<<endl;
//	}	
//	string url("http://www.cplusplus.com/reference/string/string/?kw=string");
//	size_t start = url.find("://");
//	if (start == string::npos)
//	{
//		cout << "url invalid" << endl;
//		return;
//	}
//	start += 3;
//	size_t finish = url.find('/', start);
//	cout << url.substr(start, finish - start) << endl;
//	pos = url.find("://");
//	url.erase(0, pos + 3);
//	cout << url << endl;
//
//}
//void test_string8()
//{
//	string s;
//	s.reserve(200);
//	size_t sz = s.capacity();
//	cout << "making s grow:\n";
//	for (int i = 0; i < 200; ++i)
//	{
//		s += 'c';
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	string s1("hello");
//	string s2("hello");
//	cout << s1 + s2 << endl;
//	cout << s1 + "word" << endl;
//	cout << "hello" + s1 << endl;
//}
////找到字符串中第一个只出现一次的字符
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		int hashtable[26] = { 0 };
//		for (auto c : s)
//		{
//			hashtable[c - 'a']++;
//		}
//		for (size_t i = 0; i<s.size(); ++i)
//		{
//			if (hashtable[s[i] - 'a'] == 1)
//			{
//				return i;
//			}
//		}
//		return -1;
//	}
//};
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int hashtable[256] = { 0 };
//		for (auto c : s)
//		{
//			hashtable[c]++;
//		}
//		size_t i = 0;
//		for (; i<s.size(); ++i)
//		{
//			if (hashtable[s[i]] == 1)
//			{
//				cout << s[i] << endl;
//				break;
//			}
//		}
//		if (i == s.size())
//		{
//			cout << -1 << endl;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//test_string1();
//	/*test_string2();
//	test_string3();*/
//	//test_string4();
//	//test_string5();
//	//test_string6();
//	//test_string7();
//	//test_string8();
//	system("pause");
//	return 0;
//}