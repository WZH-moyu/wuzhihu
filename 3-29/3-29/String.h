#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;
class String
{
public:
	/*String()
		:_str(new char[1])
	{
		_str[0] = '\0';
	}
	String(char* str)
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str, str);
	}*/
	//1.传统写法：
	String(char* str = "")
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str, str);
	}
	/*String(const String& s)
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str, s._str);
	}
	String operator=(const String& s)
	{
		if (this != &s)
		{
			delete[] _str;
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);
		}
		return *this;
	}*/
	~String()
	{
		delete[] _str;
	}
	char* c_str()
	{
		return _str;
	}
	//2.现代写法：
	String(const String& s)
		:_str(nullptr)
	{
		String tmp(s._str);
		swap(_str, tmp._str);
	}
	
private:
	char* _str;
};
void TestString1()
{
	String s1;
	String s2("hello word");
	cout << s1.c_str() << endl;
	cout << s2.c_str() << endl;
	String s3(s2);
	cout << s3.c_str() << endl;
	s1 = s3;
	cout << s1.c_str()<< endl;
	////char a1[] = "";
	////cout << sizeof(a1) << endl;//1
	////cout << strlen(a1) << endl;//0
	////char a2[] = "\0";
	////cout << sizeof(a2) << endl;//2
	////cout << strlen(a2) << endl;//0

	////char a3[] = "\\0";
	////cout << sizeof(a3) << endl;//3
	////cout << strlen(a3) << endl;//2

	////char a4[] = "0000";
	////cout << sizeof(a4) << endl;//5
	////cout << strlen(a4) << endl;//4

	////char a5[] = "\\0000";
	////cout << sizeof(a5) << endl;//6
	////cout << strlen(a5) << endl;//5


}