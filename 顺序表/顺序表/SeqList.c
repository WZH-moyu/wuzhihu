#include "SeqList.h"
#include <assert.h>
#include <stdlib.h>

// 检查是否需要扩容，如果需要扩容就进行扩容
// 保证函数结束后，容量一定够用
static void CheckCapacity(SeqList *seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size <= seqlist->capacity);

	if (seqlist->size < seqlist->capacity) {
		return;
	}

	// 走到这里一定需要扩容了
	int capacity = 2 * seqlist->capacity;
	SDataType *array = (SDataType *)malloc(sizeof(SDataType)* capacity);
	assert(array);

	// 把老数据搬移过来
	for (int i = 0; i < seqlist->size; i++) {
		array[i] = seqlist->array[i];
	}

	free(seqlist->array);
	seqlist->array = array;
}

void SeqListInit(SeqList *seqlist, int capacity)
{
	assert(seqlist != NULL);

	seqlist->array = (SDataType *)malloc(sizeof(SDataType)* capacity);
	assert(seqlist->array);

	seqlist->size = 0;
	seqlist->capacity = capacity;
}

void SeqListDestroy(SeqList *seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);

	free(seqlist->array);	// 重点

	seqlist->array = NULL;
	seqlist->size = 0;
	seqlist->capacity = 0;
}

void SeqListPushBack(SeqList *seqlist, SDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);

	CheckCapacity(seqlist);

	seqlist->array[seqlist->size] = value;
	seqlist->size++;
}

void SeqListPopBack(SeqList *seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size > 0);

	seqlist->size--;
}

void SeqListPushFront(SeqList *seqlist, SDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);

	CheckCapacity(seqlist);

	// 做数据搬移，i 代表空间下标
	for (int i = seqlist->size; i > 0; i--) {
		seqlist->array[i] = seqlist->array[i - 1];
	}

	seqlist->array[0] = value;
	seqlist->size++;
}

void SeqListPopFront(SeqList *seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size > 0);

	// 做数据搬移，i 代表数据下标
	for (int i = 1; i < seqlist->size; i++) {
		seqlist->array[i - 1] = seqlist->array[i];
	}

	seqlist->size--;
}

void SeqListInsert(SeqList *seqlist, int pos, SDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(pos >= 0 && pos <= seqlist->size);

	CheckCapacity(seqlist);

	for (int i = seqlist->size - 1; i >= pos; i--) {
		seqlist->array[i + 1] = seqlist->array[i];
	}

	seqlist->array[pos] = value;
	seqlist->size++;
}

void SeqListErase(SeqList *seqlist, int pos)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size > 0);
	assert(pos >= 0 && pos < seqlist->size);

	// 数据
	for (int i = pos + 1; i < seqlist->size; i++) {
		seqlist->array[i - 1] = seqlist->array[i];
	}

	seqlist->size--;
}

void SeqListPrint(const SeqList *seqlist)
{
	for (int i = 0; i < seqlist->size; i++) {
		printf("%d ", seqlist->array[i]);
	}

	printf("\n");
}

// 修改 pos 所在下标的数据为 value
void SeqListModify(SeqList *seqlist, int pos, SDataType value)
{
	assert(pos >= 0 && pos < seqlist->size);

	seqlist->array[pos] = value;
}

// 查找
int SeqListFind(const SeqList *seqlist, SDataType value)
{
	for (int i = 0; i < seqlist->size; i++) {
		if (seqlist->array[i] == value) {
			return i;
		}
	}

	return -1;
}

// 找到并删除第一个遇到的 value
void SeqListRemove(SeqList *seqlist, SDataType value)
{
	int pos = SeqListFind(seqlist, value);
	if (pos != -1) {
		SeqListErase(seqlist, pos);
	}
}

// 判断顺序表是否为空
//bool SeqListEmpty(const SeqList *seqlist)
//{
//	return seqlist->size == 0;
//}

// 返回数据个数
int SeqListSize(const SeqList *seqlist)
{
	return seqlist->size;
}