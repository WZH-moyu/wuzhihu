#include<stdio.h>
//头删+头插
struct ListNode* reverseList(struct ListNode* head) {
	if (head == NULL)
	{
		return NULL;
	}
	struct ListNode * ret = NULL;
	struct ListNode *cur = head;
	while (cur != NULL)
	{
		struct ListNode *next = cur->next;
		struct ListNode *node = cur;
		node->next = ret;
		ret = node;
		cur = next;
	}
	return ret;
}
//直接逆置
struct ListNode* reverseList(struct ListNode* head) {
	if (head == NULL)
	{
		return NULL;
	}
	struct ListNode *cur = NULL;
	struct ListNode *next = head;
	struct ListNode *node = head->next;
	while (next != NULL)
	{
		next->next = cur;
		cur = next;
		next = node;
		if (node != NULL){
			node = node->next;
		}
	}
	return cur;
}

ListNode *merge(ListNode *headA, ListNode *headB){

}