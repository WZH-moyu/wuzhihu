#include<iostream>
#include<stdlib.h>

using namespace std;

class Person{
public:
	virtual ~Person()
	{
		cout << "~Person()" << endl;
	}
};
class Student :public Person
{
public:
	Student()
		:arr(new int[100])
	{}
	virtual~Student()
	{
		if (arr)
		{
			delete[] arr;
			arr = nullptr;
		}
		cout << "~Student" << endl;
	}
	int* arr;
};

int main()
{
	Person p1;
	Student s;
	Person p2 = s;
	system("pause");
	return 0;
}
