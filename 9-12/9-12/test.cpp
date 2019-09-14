#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//class A
//{
//public:
//	void funcA()
//	{
//		printf("fincA called\n");
//	}
//	virtual void funcB()
//	{
//		printf("funcB called\n");
//	}
//};
//class B :public A
//{
//public:
//	void funcA()
//	{
//		A::funcA();
//			printf("funcAB called\n");
//	}
//	virtual void funcB()
//	{
//		printf("funcBB called\n");
//	}
//};
//void main()
//{
//	B b;
//	A *pa;
//	pa = &b;
//	A *pa2 = new A;
//	pa->funcA();
//	pa->funcB();
//	pa2->funcA();
//	pa2->funcB();
//	delete pa2;
//	system("pause");
//}
//int FindSubString(char* pch)
//{
//	int   count = 0;
//	char  * p1 = pch;
//	while (*p1 != '\0')
//	{
//		if (*p1 == p1[1] - 1)
//		{
//			p1++;
//			count++;
//		}
//		else {
//			break;
//		}
//	}
//	int count2 = count;
//	while (*p1 != '\0')
//	{
//		if (*p1 == p1[1] + 1)
//		{
//			p1++;
//			count2--;
//		}
//		else {
//			break;
//		}
//	}
//	if (count2 == 0)
//		return(count);
//	return(0);
//}
//void ModifyString(char* pText)
//{
//	char  * p1 = pText;
//	char  * p2 = p1;
//	while (*p1 != '\0')
//	{
//		int count = FindSubString(p1);
//		if (count > 0)
//		{
//			*p2++ = *p1;
//			sprintf(p2, "%i", count);
//			while (*p2 != '\0')
//			{
//				p2++;
//			}
//			p1 += count + count + 1;
//		}
//		else {
//			*p2++ = *p1++;
//		}
//	}
//}
//void main(void)
//{
//	char text[32] = "XYBCDCBABABA";
//	ModifyString(text);
//	printf(text);
//	system("pause");
//}
//#include "stdio.h"
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	system("pause");
//}
//class MyClass
//{
//public:
//	MyClass(int i = 0)
//	{
//		cout << i;
//	}
//	MyClass(const MyClass &x)
//	{
//		cout << 2;
//	}
//	MyClass &operator=(const MyClass &x)
//	{
//		cout << 3;
//		return *this;
//	}
//	~MyClass()
//	{
//		cout << 4;
//	}
//};
//int main()
//{
//	MyClass obj1(1), obj2(2);
//	MyClass obj3 = obj1;
//	cout << endl;
//	system("pause");
//	return 0;
//}
char *myString()
{
	char buffer[6] = { 0 };
	char *s = "Hello World!";
	for (int i = 0; i < sizeof(buffer) - 1; i++)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main(int argc, char **argv)
{
	printf("%s\n", myString());
	system("pause");
	return 0;
}