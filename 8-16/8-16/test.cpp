#include "SeqList.h"
#include <stdio.h>


void TestSeqList1() {
	SeqList seqlist;

	SeqListInit(&seqlist, 10);

	SeqListPushBack(&seqlist, 1);
	SeqListPushBack(&seqlist, 2);
	SeqListPushBack(&seqlist, 3);
	// 1, 2, 3

	SeqListPushFront(&seqlist, 11);
	SeqListPushFront(&seqlist, 12);
	SeqListPushFront(&seqlist, 13);
	// 13, 12, 11, 1, 2, 3

	SeqListInsert(&seqlist, 4, 100);
	// 13, 12, 11, 1, 100, 2, 3
	SeqListPrint(&seqlist);

	SeqListPopBack(&seqlist);
	// 13, 12, 11, 1, 100, 2
	SeqListPrint(&seqlist);
	SeqListPopFront(&seqlist);
	// 12, 11, 1, 100, 2
	SeqListPrint(&seqlist);
	SeqListErase(&seqlist, 2);
	// 12, 11, 100, 2
	SeqListPrint(&seqlist);
	SeqListDestory(&seqlist);
	SeqListPrint(&seqlist);
}

void TestSeqList2()
{
	SeqList seqlist;

	SeqListInit(&seqlist, 10);

	SeqListPushBack(&seqlist, 3);
	SeqListPushBack(&seqlist, 5);
	SeqListPushBack(&seqlist, 2);
	SeqListPushBack(&seqlist, 7);
	SeqListPushBack(&seqlist, 9);
	SeqListPushBack(&seqlist, 4);
	SeqListPushBack(&seqlist, 8);
	SeqListPushBack(&seqlist, 6);
	SeqListPushBack(&seqlist, 3);
	SeqListPushBack(&seqlist, 1);
	SeqListPushBack(&seqlist, 0);
	SeqListPushBack(&seqlist, 3); 
	SeqListPrint(&seqlist);
	SeqListRemoveAll(&seqlist, 3);
	SeqListModify(&seqlist, 4, 6);
	SeqListPrint(&seqlist);
	SeqListBubbleSort(&seqlist);
	SeqListPrint(&seqlist);
	int r = SeqListBinaryFind(&seqlist, 3);
	printf("%d\n", r);
}

int main() {
	TestSeqList2();
	system("pause");
	return 0;
}