#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"SeqList.h"
static void CheckCapacity(SeqList *seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	//assert(seqlist->size <= seqlist->capicity);
	if (seqlist->size > seqlist->capicity)
		return;
	if (seqlist->size < seqlist->capicity)
		return;
	int capicity = 2 * seqlist->capicity;
	SLDataType *array = (SLDataType*)malloc(sizeof(SLDataType)*capicity);
	for (int i = 0; i < seqlist->size; i++)
	{
		array[i] = seqlist->array[i];
	}
	assert(array);
	free(seqlist->array);
	seqlist ->array = array;
}
void SeqListInit(SeqList* seqlist, size_t capacity)
{
	assert(seqlist != NULL);
	seqlist->array = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
	assert(seqlist->array);
	seqlist->size = 0;
	seqlist->capicity = capacity;
}
void SeqListDestory(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	free(seqlist->array);
	seqlist->array = NULL;
	seqlist->capicity = 0;
	seqlist->size = 0;
}
void SeqListPushBack(SeqList* seqlist, SLDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	CheckCapacity(seqlist);
	seqlist->array[seqlist->size] = value;
	seqlist->size++;
}
void SeqListPopBack(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size > 0);
	seqlist->array[seqlist->size] = 0;
	seqlist ->size--;
}
void SeqListPushFront(SeqList* seqlist, SLDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	CheckCapacity(seqlist);
	for (int i = seqlist->size; i >0; i--)
	{
		seqlist->array[i] = seqlist->array[i-1];
	}
	seqlist->array[0] = value;
	assert(seqlist->array != NULL);
	seqlist->size++;
}
void SeqListPopFront(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size > 0);
	for (int i = 1; i < seqlist->size; i++)
	{
		seqlist->array[i - 1] = seqlist->array[i];
	}
	seqlist->array[seqlist->size] = 0;
	seqlist->size--;
}
int SeqListFind(SeqList* seqlist, SLDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	for (int i = 0; i < seqlist->size; i++)
	{
		if (seqlist->array[i] == value)
			return i;
	}
	return -1;
}
void SeqListInsert(SeqList* seqlist, size_t pos, SLDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(pos >= 0 && pos <= seqlist->size);
	CheckCapacity(seqlist);
	for (int i = seqlist->size-1; i >= pos; i--)
	{
		seqlist->array[i+1] = seqlist->array[i];
	}
	seqlist->array[pos] = value;
	assert(seqlist->array != NULL);
	seqlist->size++;
}
void SeqListErase(SeqList* seqlist, size_t pos)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size >= 0);
	assert(pos >= 0 && pos <= seqlist->size);
	for (int i = pos; i < seqlist->size-1; i++)
	{
		seqlist->array[i] = seqlist->array[i + 1];
	}
	seqlist->array[seqlist->size - 1] = 0;
	seqlist->size--;
}
void SeqListRemove(SeqList* seqlist, SLDataType value)
{
	size_t pos = SeqListFind(seqlist, value);
	if (pos != -1)
		SeqListErase(seqlist, pos);
}
void SeqListModify(SeqList* seqlist, size_t pos, SLDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(pos >= 0 && pos <= seqlist->size);
	seqlist->array[pos] = value;
}
void SeqListPrint(SeqList* seqlist)
{
	assert(seqlist != NULL);
	for (int i = 0; i < seqlist->size; i++)
	{
		printf("%6d", seqlist->array[i]);
	}
	printf("\n");
}
void Swap(SLDataType* num1, SLDataType* num2)
{
	int ret = *num1;
	*num1 = *num2;
	*num2 = ret;
}
void SeqListBubbleSort(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size >= 1);
	for (int i = 0; i < seqlist->size; i++)
	{
		int flag = 0;
		for (int j = seqlist->size - 1; j > i; j--)
		{
			if (seqlist->array[j - 1] > seqlist->array[j])
			{
				Swap(seqlist->array + (j - 1), seqlist->array + j);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
int SeqListBinaryFind(SeqList* seqlist, SLDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	int left = 0;
	int right = seqlist->size - 1;
	while (left < right)
	{
		int mid = (right - left) / 2 + left;
		if (seqlist->array[mid] == value)
			return mid;
		else if (seqlist->array[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	return -1;
}
void SeqListRemoveAll(SeqList* seqlist, SLDataType value)
{
#if 0
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	int index = 0;
	for (int i = 0; i < seqlist->size; i++)
	{
		if (seqlist->array[i] != value)
		{
			seqlist->array[index] = seqlist->array[i];
			index++;
		}
	}
	seqlist->size = index;
#endif // 0
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	SLDataType* array = (SLDataType*)malloc(sizeof(SLDataType)*seqlist->size);
	assert(array);
	int index = 0;
	for (int i = 0; i < seqlist->size; i++)
	{
		if (seqlist->array[i] != value)
		{
			array[index] = seqlist->array[i];
			index++;
		}
	}
	free(seqlist->array);
	seqlist->array = array;
	seqlist->size = index;

}