#include<iostream>
#include<string>
#include<mutex>
#include<stdlib.h>
using namespace std;
//int fun(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	int ret = 1;
//	ret += fun(++s);
//	return ret;
//}
//int main()
//{
//	char s[20];
//	cin >> s;
//	int ret = fun(s);
//	cout << s << endl;
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (_a == nullptr)
		{
			_mutex.lock();
			if (_a == nullptr)
			{
				_a = new Singleton();
			}
			_mutex.unlock();
		}
		return _a;
	}
	class Garbage
	{
		~Garbage()
		{
			if (Singleton::_a==nullptr)
			{
				delete Singleton::_a;
			}
		}
	};
	static Garbage gg;
private:
	Singleton(){}
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	static mutex _mutex;
	static Singleton* _a;
};
mutex Singleton::_mutex;
Singleton* Singleton::_a = nullptr;
Singleton::Garbage gg;