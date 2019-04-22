//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//using namespace std;
////int main()
////{
////	system("pause");
////	return 0;
////}
////class Solution {
////public:
////	vector<vector<int>> generate(int numRows) {
////		vector<vector<int>> Matrix;
////		//分配numRows行
////		Matrix.resize(numRows);
////		for (int i = 0; i<numRows; i++)
////		{
////			//每行分配i+1列
////			Matrix[i].resize(i + 1,1);
////			Matrix[i][0] = Matrix[i][i] = 1;
////
////		}
////		for (int i = 2; i < numRows; i++)
////		{
////			for (int j = 1; j < i; j++)
////			{
////				Matrix[i][j] = Matrix[i-1][j-1] + Matrix[i-1][j];
////			}
////		}
////		return Matrix;
////	}
////};
//template<class T>
//class Vector
//{
//public:
//	typedef T* Iterator;
//	typedef const T* ConstIterator;
//
//	Vector()
//		:_start(nullptr)
//		, _finish(nullptr)
//		, _endOfStorage(nullptr)
//	{
//
//	}
//	Vector(const Vector<T>& v)
//	{
//		//开辟空间
//		T* _start = new T[v.Capacity()];
//		//拷贝内容
//		for (int i = 0; i < v.Size(); i++)
//		{
//			_start[i] = v[i];
//		}
//		//更新
//		_finish = _start + v.Size();
//		_endOfStorage = _start + v.Capacity();
//
//	}
//	T& operator=(Vector<T> v)
//	{
//		Swap(v);
//		return *this;
//	}
//	void Swap(Vector<T> v)
//	{
//		swap(_start, v._start);
//		swap(_finish, v._finish);
//		swap(_endOfStorage, v._endOfStorage);
//	}
//	size_t Size() const
//	{
//		return _finish - _start;
//	}
//	size_t Capacity() const
//	{
//		return _endOfStorage - _start;
//	}
//	void Reserve(size_t newCapacity)
//	{
//		size_t sz = Size();
//		if (newCapacity > Capacity())
//		{
//			T* start = new T[newCapacity];
//			//检查空间是否为空
//			if (_start)
//			{
//				//拷贝原有内容，浅拷贝
//				//memcpy(start, _start, sizeof(T)* sz);
//				//深拷贝,调用T类型赋值运算符重载
//				for (int i = 0; i < sz; i++)
//				{
//					start[i] = _start[i];
//				}
//				delete[] _start;
//			}
//			_start = start;
//			//更新size
//			_finish = _start + sz;
//			_endOfStorage = _start + newCapacity;
//		}
//	}
//	void PushBack(const T& val)
//	{
//		if (_finish == _endOfStorage)
//		{
//			size_t newC = (_start == nullptr ? 1 : 2 * Capacity());
//			Reserve(newC);
//		}
//		*_finish = val;
//		//更新size
//		++_finish;
//
//	}
//	
//		~Vector()
//		{
//			if (_start)
//			{
//				delete[] _start;         
//				_start = _finish = _endOfStorage = nullptr;
//			}
//		}
//	const T& operator[](size_t pos)
//	{
//		assert(pos < Size());
//		return _start[pos];
//	}
//	Iterator Begin()
//	{
//		return _start;
//	}
//	Iterator End()
//	{
//		return _finish;
//	}
//
//	ConstIterator CBegin() const
//	{
//		return _start;
//	}
//	ConstIterator CEnd() const
//	{
//		return _finish;
//	}
//	void Insert(Iterator pos, const T& val)
//	{
//		assert(pos >= _start && pos <= _finish);
//		size_t len = pos - _start;
//		if (_finish == _endOfStorage)
//		{
//			size_t newCapacity;
//		}
//		pos = _start + len;
//		Iterator End = _finish;
//		while (End > pos)
//		{
//			*End = *(End - 1);
//			--End;
//		}
//		*pos = val;
//		++_finish;
//	}
//
//	//Erase导致迭代器失效：可能导致迭代器越界，或者访问异常
//	//获取Earse的返回值，更新迭代器
//	Iterator Earse(Iterator pos)
//	{
//		assert(pos < _finish&&pos >= _start);
//		Iterator Begin = pos + 1;
//		while (Begin < _finish)
//		{
//			*(Begin - 1) = *Begin;
//			Begin++;
//		}
//		--_finish;
//		return pos;
//	}
//	void Resize(size_t n,const T& val=T())
//	{
//		if (n <= Size())
//		{
//			_finish = _start + n;
//		}
//		else
//		{
//			if (n > Capacity())
//			{
//				Reserve(n);
//			}
//			//Size~n
//			while (_finish != _start + n)
//			{
//				*_finish = val;
//				_finish++;
//			}
//		}
//	}
//private:
//	T* _start;
//	T* _finish;
//	T* _endOfStorage;
//};
////void PrintVector(const Vector<T>& v)
////{
////	for (auto e : v)
////		cout << v[i]++ << endl;
////	
////}
//template<class T>
//void PrintVector(const Vector<T>& v)
//{    // 使用const迭代器进行遍历打印   
//	Vector<T>::ConstIterator it = v.CBegin();   
//	while (it != v.CEnd())    
//	{        
//		cout << *it << " ";       
//		++it;   
//	}    
//	cout << endl;
//}
//void testVector1()
//{
//	Vector<int> v1;
//	v1.PushBack(1);
//	v1.PushBack(2);
//	v1.PushBack(3);
//	v1.PushBack(4);
//	v1.PushBack(5);
//	v1.PushBack(6);
//	PrintVector(v1);
//	Vector<int>::Iterator it = v1.Begin();
//	while (it != v1.End())
//	{
//		*it += 2;
//		++it;
//	}
//	PrintVector(v1);
//}
//void testVector2()
//{
//	Vector<int> v2;
//	v2.Reserve(20);
//	PrintVector(v2);
//}
//void testVector3()
//{
//	Vector<string> v1;
//	v1.PushBack("hello");
//	v1.PushBack("word");
//	v1.PushBack("hello");
//	v1.PushBack("word");
//	v1.PushBack("hello");
//	v1.PushBack("word");
//	Vector<string> v2;
//	//v2 = v1;
//	PrintVector(v1);
//}
//int main()
//{
//	testVector1();
//	system("pause");
//	return 0;
//}