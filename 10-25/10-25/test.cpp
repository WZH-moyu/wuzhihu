#include<iostream>
template<class T>
struct ListNode
{
	T* next;
	T data;
};
template<class T>
void Destory(T* Head)
{
	if (Head == NULL)
		return;
	T *cur= Head->next;
	while (cur != NULL)
	{
		T*p = cur;
		delete cur;
		cur = p->next;
	}
	delete Head;
}
template<class T>
T* Init(T* Head)
{
	if (Head == NULL && Head->next == NULL)
		return;
	T* cur = Head->next;
	while (cur != NULL)
	{
		cur->data = 0;
		cur = cur->next;
	}
	return Head;
}
template<class T>
T* Reverse(T* Head)
{
	if (Head == NULL && Head->next == NULL)
		return;
	T* cur = Head;
	T* ret=NULL:
	while (cur != NULL)
	{
		T*p = cur;
		cur = cur->next;
		p->next = ret;
		ret = p;
	}
	return ret;
}