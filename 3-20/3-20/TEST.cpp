#include<iostream>
#include<stdlib.h>
#include<mutex>
using namespace std;
//char * TestAuto() 
//{ 
//	return nullptr;
//}
//
//int main() 
//{
//	int a = 10; 
//	auto b = a;
//	auto c = 'a'; 
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl; 
//	cout << typeid(d).name() << endl;
//	//auto e; 无法通过编译，使用auto定义变量时必须对其进行初始化 
//	system("pause");
//	return 0;
//}
//void TestFor()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e:array)
//	{
//		e *= 2;
//	}
//	for (auto e : array) 
//		cout << e << " ";
//	cout << endl;
//}
//int main()
//{
//	TestFor();
//	system("pause");
//	return 0; 
//}
//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto & c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name()<< endl;
//	cout << typeid(c).name()<< endl;
//	*a = 20;
//	*b = 30;
//	c = 40;
//	system("pause");
//	return 0;
//}
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(nullptr);
//	f((int *)nullptr);
//	system("pause");
//	return 0;
//}
//设计一个类，只能在堆上创建对象
//class HeapType
//{
//public:
//	static HeapType* GetHeapObj()
//	{
//		return new HeapType;
//	}
//private:
//	HeapType()
//	{
//
//	}
//	只声明，不实现。实现可能会很麻烦，本身不需要。
//	声明成私有
//	HeapType(const HeapType& ht);
//};
//int main()
//{
//	HeapType* p1 = HeapType::GetHeapObj();
//	HeapType obj3(*p1);
//	HeapType obj1;
//	system("pause");
//	return 0;
//}
//设计一个类，只能在栈上创建对象
//class StackType
//{
//public:
//	static StackType GetStackObj()
//	{
//		StackType ojb;
//		return ojb;
//	}
//	void Print()
//	{
//		cout << "StackType::Print()" << endl;
//	}
//private:
//	StackType()
//	{
//
//	}
//};
//int main()
//{
//	StackType::GetStackObj().Print();
//	StackType obj = StackType::GetStackObj();
//	obj.Print();
//	system("pause");
//	return 0;
//}
//饿汉模式
//class Singleton
//{
//public:
//	Singleton* GetInstance()
//	{
//		return &_sInstance;
//	}
//private:
//构造函数私有
//	Singleton()
//	{
//
//	}
//	//防拷贝
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&)=delete;
//	static Singleton _sInstance;
//};
//在程序入口之前实现对象的初始化
//Singleton Singleton ::_sInstance;
//int main()
//{
//	//Singleton copy(*Singleton::GetInstance());
//	system("pause");
//	return 0;
//}
//懒汉模式
//优点：第一次使用实例对象时，创建对象
//缺点：复杂
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (_spInstance == nullptr)
		{
			_smtx.lock();
			if (_spInstance == nullptr)
			{
				_spInstance = new Singleton;
			}
			_smtx.unlock();
		}
		return _spInstance;
	}
	class CGarbo
	{
	public:
		~CGarbo()
		{
			if (_spInstance)
			{
				delete _spInstance;
			}
		}
	};
private:
	//构造函数私有化
	Singleton()
	{
		cout << "Singleton()" << endl;
	}
	~Singleton()
	{
		cout << "~Singleton()" << endl;
	}
	//	//防拷贝
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&)=delete;
	static Singleton* _spInstance;
	static mutex _smtx;
	static CGarbo _sgc;
};
mutex Singleton::_smtx;
Singleton::CGarbo Singleton::_sgc;
Singleton* Singleton::_spInstance = nullptr;

////线程演示
#include<thread>
void func(int n)
{
	cout << Singleton::GetInstance() << endl;
}
int main()
{
	thread t1(func,10);
	thread t2(func,10);
	
	t1.join();
	t2.join();
	
	cout << Singleton::GetInstance() << endl;
	cout << Singleton::GetInstance() << endl;

	system("pause");
	return 0;

