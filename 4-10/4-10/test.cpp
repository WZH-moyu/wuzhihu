#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
//int main()
//{
//	vector<int> v1(10, 2);
//	vector<int>::const_iterator cit = v1.cbegin();
//	while (cit != v1.cend())
//	{
//		cout << *cit << "";
//		++cit;
//	}
//    cout << "hehe" << endl;
//	system("pause");
//	return 0;
// }
//类型模板参数
//template<class T1,typename T2>
//T1 Add(const T1& a, const T2& b)
//{
//	return a + b;
//}
////非类型模板参数，作为常量使用
//template<class T,size_t N>
//class Array
//{
//private:
//	T a[N];
//};
////RTTI:Run Time Type Information / Identfication
////RTTI:  typeid  typeid(a).name
//bool isPODType(const char* tp)
//{
//	static char* typyArr[] = { "int", "double", "float", "char", "..." };
//	for ()
//	{
//
//	}
//}
//template<class T>
//void Copy(T* dst, const T* src, size_t sz, bool isPODtype)
//{
//	if (isPODtype(typeid(T).name()))
//	{
//		memcpy(dst, src, sizeof(T)* sz);
//	}
//	else
//	{
//		for (int i = 0; i < sz; i++)
//		{
//			dst[i] = src[i];
//		}
//	}
//}
template<size_t N>
struct Sum
{
	enum{Ret=N+Sum<N-1>::Ret};
};
//Sun<10>  Ret  10+Sum<9>-->10+9+Sum<8>-->10+9+8+....
int main()
{
	/*Array<int, 10> arr1;
	Array<double, 100> arr2;*/
	cout << Sum<10>::Ret << endl;
	system("pause");
	return 0;
}