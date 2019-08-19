#pragma once
#include<iostream>
using namespace std;
template<class T>
class Node
{
public:
	Node<T> *next;
	T data;
};
template<class T>
class List
{
public:
	List() 
	{
		head = new Node;
		head->next = nullptr;
		cout << "创建对象成功" << endl;
	}
	~List() 
	{
		Node* p = head, *s;
		while (p->next != nullptr)
		{
			s = p->next;
			p = s->next;
			delete s;
		}
		delete p;
		delete head;
	}
	void SListPushFront(List *list, T value)
	{
		node = (Node*)new Node;
		node->next = list->head;
		node->data = value;
		list->head=node;
	}
	void SListPushBack(List *list, T value)
	{
		if (list->head = nullptr)
		{
			SListPushFront(list, value);
			return;
		}
		Node* cur;
		for (cur = list->head; cur->next != nullptr; cur = cur->next) {}
		node = (*Node)new Node;
		node->data = value;
		cur->next = node;
		node->next = nullptr;
	}
	void SListPopFront(SList *list)
	{
		assert(list->head != nullptr);
		Node* oldhead = list->head;
		list->head = oldhead->next;
		delete oldhead;
	}
	void SListPopBack(SList *list)
	{
		assert(list->head != nullptr);
		if (list->head->next == nullptr)
		{
			SListPopFront(lsit);
			return;
		}
		Node* cur;
		for (cur = list->head; cur->next->next != nullptr; cur = cur->next) {}
		Node* ret = cur->next;
		cur->next = nullptr;
		delete ret;
	}
private:
	Node<T> *head;
};
