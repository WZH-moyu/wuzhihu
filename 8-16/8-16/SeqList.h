#include<stdbool.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* array; // 指向动态开辟的数组
	size_t size; // 有效数据个数
	size_t capicity; // 容量空间的大小
}SeqList;
// 基本增删查改接口
void SeqListInit(SeqList* seqlist, size_t capacity);
void SeqListDestory(SeqList* seqlist);
void CheckCapacity(SeqList* seqlist);
void SeqListPushBack(SeqList* seqlist, SLDataType value);
void SeqListPopBack(SeqList* seqlist);
void SeqListPushFront(SeqList* seqlist, SLDataType value);
void SeqListPopFront(SeqList* seqlist);
int SeqListFind(SeqList* seqlist, SLDataType value);
void SeqListInsert(SeqList* seqlist, size_t pos, SLDataType value);
void SeqListErase(SeqList* seqlist, size_t pos);
void SeqListRemove(SeqList* seqlist, SLDataType value);
void SeqListModify(SeqList* seqlist, size_t pos, SLDataType value);
void SeqListPrint(SeqList* seqlist);
// 扩展面试题实现
void SeqListBubbleSort(SeqList* seqlist);
int SeqListBinaryFind(SeqList* seqlist, SLDataType value);
// 本题要求：时间复杂度：O(N) 空间复杂度 O(1)
void SeqListRemoveAll(SeqList* seqlist, SLDataType value);