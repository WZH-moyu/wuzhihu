#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

//class Person {
//public:   
//	Person() 
//	{ 
//		++_count;
//	} 
//protected:    
//	string _name; // 姓名 
//public :    
//	static int _count; // 统计人的个数。
//}; 
//int Person :: _count = 0; 
//class Student : public Person 
//{ 
//protected :    
//	int _stuNum ; // 学号 
//}; 
//class Graduate : public Student 
//{ 
//protected :   
//	string _seminarCourse ; // 研究科目 
//}; 
//void TestPerson()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << " 人数 :" << Person::_count << endl;
//	Student::_count = 0;
//	cout << " 人数 :" << Person::_count << endl;
//}
//class Person {
//public:   
//	string _name; // 姓名
//};
//class Student : public Person
//{ 
//protected :  
//	int _num ; //学号
//};
//class Teacher : public Person 
//{ 
//protected :    int _id ; // 职工编号
//}; 
//class Assistant : public Student, public Teacher 
//{ 
//protected :  
//	string _majorCourse ;
//	// 主修课程 
//}; 
//void Test () 
//{    // 这样会有二义性无法明确知道访问的是哪一个  
//	Assistant a ;
//	a._name = "peter";
//	a.Student::_name = "xxx"; 
//	a.Teacher::_name = "yyy";
//}

int main()
{
	//TestPerson();
	system("pause");
	return 0;
}