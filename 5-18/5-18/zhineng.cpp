#include<iostream>
#include<stdlib.h>
#include<string>
#include<mutex>
#include<thread>
using namespace std;
//template<class T>
//class SmartPtr{
//public:
//	SmartPtr(T*ptr=nullptr)
//		:_ptr(ptr)
//	{
//	}
//	~SmartPtr()
//	{
//		if (_ptr)
//			delete[] _ptr;
//	}
//	T&operator*()
//	{
//		return *_ptr;
//	}
//	T*operator->()
//	{
//		return _ptr;
//	}
//private:
//	T* _ptr;
//};
//int main()
//{
//	system("pause");
//	return 0;
//}
template<class T>
class LockGuard
{
public:
	LockGuard(T&lock)
		:_lock(lock)
	{
		_lock.lock();
	}
	LockGuard(const LockGuard<T>&) = delete;

	~LockGuard()
	{
		_lock.unlock();
	}
private:
	T& _lock;
};
void Func(string &s,mutex* mtx)
{
	/*int i = 0;
	cin >> i;
	mtx.lock();
	s[i] +=1;
	mtx.unlock();*/
	//mtx->lock();
	//s.at(3) += 1;
	LockGuard<mutex> T(*mtx);
	//lock_guard<mutex> Lock(*mtx);
	int i;
	cin >> i;
	if (i > 10)
	{
		return;
	}
//	mtx->unlock();
}
int main()
{
	try
	{
		string s("hello");
		mutex mtx;
		thread t1(Func, s, &mtx);
		thread t2(Func, s, &mtx);
		//Func(s,&mtx);
		t1.join();
		t2.join();
		cout << s << endl;
		system("pause");
	}
	catch (exception&e)
	{
		cout << e.what() << endl;
	}
	return 0;
}