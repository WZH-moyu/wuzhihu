//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//class bitSet
//{
//public:
//	bitSet(size_t range)
//	{
//		_bits.resize((range >> 5) + 1);
//	}
//	//x对应的位为1表示存在
//	void Set(size_t x)
//	{
//		size_t index = x >> 5;
//		size_t bitNum = x % 32;
//		_bits[index] |= (1 << bitNum);
//	}
//	//x对应的位为0表示不存在
//	void ReSet(size_t x)
//	{
//		size_t index = x >> 5;
//		size_t bitNum = x % 32;
//		_bits[index] &=(!(1 << bitNum));
//	}
//	//测试x是否存在
//	bool Test(size_t x)
//	{
//		size_t index = x >> 5;
//		size_t bitNum = x % 32;
//		return _bits[index] & (!(1 << bitNum));
//	}
//private:
//	vector<int> _bits;
//};
//int main()
//{
//	bitSet bs(10000);
//	bs.Set(5);
//	bs.Set(2);
//	bs.ReSet(5);
//	bool ret = bs.Test(2);
//	return 0;
//}
template<class V>
struct HashBucketNode
{
	HashBucket(const V&data)
	:Next(nullptr)
	, _data(data)
	{}
	HashBucketNode<V>* _Next;
	V _data;
};
template<class V,class HF=DefHashF<V>>
class HashBucket
{
	typedef HasBuckNode<V> Node;
	typedef Node* Node;
public:
	HashBucket(size_t capacity = 3)
		:size(0)
	{

	}
	bool Insert(const V& data)
	{

	}
	bool BucketCount()
	{
		_ht.capacity();
	}
	void CheckCapacity()
	{
		size_t bucketCount = BucketCount();
		if (size == bucketCount)
		{
			HashBucket<V, HF> newHt(bucketCount);
			for (size_t index = 0; index < bucketCount; index++)
			{
				Node Cur = _ht[index];
				while (Cur)
				{
					_ht[index] = Cur->_Next;
					size_t No = newHt.HashFunc(Cur->data);
					Node Pos = newHt._ht[No];
					while (Pos)
					{
						if (Pos->data == Cur->data)
							break;
						Pos = Pos->Next;
					}
					if (Pos == nullptr)
					{
						Cur->Next = newHt._Ht[No];
						newHt._ht[No] = Cur;
					}
					else
					{
						Cur->Next = Pos->next;
						Pos->Next = Cur;
					}
					Cur = _ht[index];
				}
			}
			newHt.size = size;
			this->Swap(newHt);
		}
	}
private:
	size_t HashFunc(const V& data)
	{
		return HF()(data) % _ht.BucketCount();
	}
private:
	vector<Node*> _ht;
	size_t size;
};
