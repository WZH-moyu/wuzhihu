#include<stdio.h>
#include<stdlib.h>
//求两个链表对应位之和，返回新链表头
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//	if (l1 == NULL)
//		return l2;
//	else if (l2 == NULL)
//		return l1;
//	else{
//		struct ListNode *l3；
//		struct ListNode *l4；
//			l4 = l3;
//		while (l1 != NULL&&l2 != NULL)
//		{
//			l3->val = l1->val + l2->val;
//			l1 = l1->next;
//			l2 = l2->next;
//			l3 = l3->next;
//		}
//		return l4;
//	}
//}
int* twoSum(int* nums, int numsSize, int target) {
	int *arr[2];
	int i = 0;
	int j = 0;
	for (i = 0; i<numsSize; i++)
	{
		for (j = 0; j<numsSize; j++)
		{
			if (*(nums + i) + *(nums + j) == target)
			{
				arr[0] = &i;
				arr[1] = &j;
				return *arr;
			}
		}
	}
	return NULL;
}
int main()
{
	int nums[4] = { 2, 7, 11, 15 };
	int numsSize = 4;
	int target = 7;
	printf("%d,%d\n", *twoSum(nums, numsSize, target));
	system("pause");
	return 0;
}
