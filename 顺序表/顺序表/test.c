
#include "SeqList.h"


void TestSeqList1() {
	SeqList seqlist;

	SeqListInit(&seqlist, 100);

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


	SeqListPopBack(&seqlist);
	// 13, 12, 11, 1, 100, 2

	SeqListPopFront(&seqlist);
	// 12, 11, 1, 100, 2

	SeqListErase(&seqlist, 2);
	// 12, 11, 100, 2
	SeqListDestroy(&seqlist);
}

int main() {
	TestSeqList1();
}