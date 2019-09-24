#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
//class A
//{
//public:
//	A() { cout << "A();"; }
//	A(const A& obj) { cout << "A(const A&);"; }
//	void operator=(const A& obj) { cout << "A=;"; }
//};
//void main()
//{
//	A obj1;
//	A obj2 ;
//	obj2 = obj1;
//	system("pause");
//}
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		if (array.empty())
//			return false;
//		for (int i = 0; i < array[0].size(); i++)
//		{
//			for (int j = 0; j < array.size(); j++)
//			{
//				if (target == array[j][i])
//					return true;
//			}
//		}
//		return false;
//	}
//};
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		string s1;
//		for (int i = 0; i < length; i++)
//		{
//			if (str[i] != ' ')
//			{
//				s1.push_back(str[i]);
//			}
//			else
//			{
//				s1.push_back('%');
//				s1.push_back('20');
//			}
//		}
//		string * str = &s1;
//	}
//};
//char s1;
//	void replaceSpace(char *str, int length) {
//		for (int i = 0; i < length; i++)
//		{
//			if (str[i] != ' ')
//			{
//				s1 += str[i];
//			}
//			else
//			{
//				s1 += '%20';
//			}
//		}
//		str = &s1;
//	}
//int main()
//{
//	char str[] ="hello world";
//	int lenth = sizeof(str);
//	replaceSpace(str, lenth);
//	cout << str << endl;
//	system("pause");
//	return 0;
//}
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		for (int i = 0; i < length; i++)
//		{
//			if (str[i] == ' ')
//			{
//				int ret = length;
//				for (int j = length + 2; j > i + 2; j--)
//				{
//					str[j] = str[ret];
//					ret--;
//				}
//				str[i] = '%';
//				i++;
//				str[i] = '2';
//				i++;
//				str[i] = '0';
//			}
//		}
//	}
//};
//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) {
//		if (head->next == NULL)
//			return;
//		if (head->next->next == NULL)
//			return;
//		ListNode* cur = head;
//		ListNode* p = cur->next;
//		ListNode* q = p->next;
//		while (p->next != NULL)
//		{
//			p->next = cur;
//			cur = p;
//			p = q;
//			q = q->next;
//		}
//		head = p;
//	}
//};
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {
	}
};

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		if (head != NULL) {
			if (head->next != NULL) {
				printListFromTailToHead(head->next);
			}
			cout << head->val << endl;
		}

	}
};