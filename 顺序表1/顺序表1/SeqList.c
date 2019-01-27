#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void SeqListInit(PSeqList ps)
{
	assert(ps);//断言
	ps->array = (DataType*)malloc(sizeof(DataType)* 10);
	if (ps->array == NULL)//开辟空间失败
	{
		//assert(0);
		return;
	}
	ps->capacity = 10;
	ps->size = 0;
}
void SeqListPrint(PSeqList ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d", ps->array[i]);
	}
	printf("\n");
}
void CheakCapacity(PSeqList ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity * 2;//定义新的容量
		DataType* PTemp = (DataType*)malloc(sizeof(DataType)*newcapacity);//增容
		if (PTemp == NULL)
		{
			assert(0);
			return;
		}
		//拷贝元素
		memcpy(PTemp, ps->array, ps->size*sizeof(DataType));
		//释放旧的空间
		free(ps->array);
		ps->array = PTemp;
		ps->capacity = newcapacity;
	}
}
void SeqListPushBack(PSeqList ps, DataType data)
{
	assert(ps);
	CheakCapacity(ps);//检查是否已满，增容
	ps->array[ps->size] = data;
	ps->size++;
}
void SeqListPopBack(PSeqList ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("顺序表为空，没有可删除的项\n");
		return;
	}
	ps->size--;
}
void SeqListPushFront(PSeqList ps, DataType data)
{
	assert(ps);
	CheakCapacity(ps);//检查是否已满，增容
	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->array[i] = ps->array[i - 1];
	}
	ps->array[0] = data;
	ps->size++;
}
void SeqListPopFront(PSeqList ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("顺序表为空，没有可删除的项\n");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}
void SeqListInsert(PSeqList ps, int pos, DataType data)
{
	assert(ps);
	if (pos<0 || pos>ps->size)
	{
		printf("插入元素非法，无效\n");
		return;
	}
	CheakCapacity(ps);//检查是否已满，增容
	int i = 0;
	for (i = ps->size; i > pos; i--)
	{
		ps->array[i] = ps->array[i - 1];
	}
	ps->array[pos] = data;
	ps->size++;
}
void SeqListErase(PSeqList ps, int pos)
{
	assert(ps);
	if (pos < 0 || pos >= ps->size)
	{
		printf("删除的项不存在\n");
		return;
	}
	if (0 == ps->size)
	{
		printf("顺序表为空,没有可以删除的项\n");
		return;
	}
	int i = 0;
	for (i = pos; i < ps->size - 1; i++)
	{
		ps->array[i] = ps->array[i + 1];//注意：这里不能用i-1=i这种类型的
	}
	ps->size--;
}
int SeqListFind(PSeqList ps, DataType data)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == data)
		{
			return i;
		}
	}
	printf("查找的项不存在\n");
	return -1;
}
void SeqListRemove(PSeqList ps, DataType data)
{
	assert(ps);
	int ret = SeqListFind(ps, data);
	int i = 0;
	if (ret != -1)
	{
		SeqListErase(ps, ret);
		return;
	}
	else
		printf("移除的项不存在\n");
	return;
}
void SeqListRemoveAll(PSeqList ps, DataType data)
{
	assert(ps);
	int i = 0;
	int j = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == data)
		{
			j = i;
			SeqListErase(ps, j);
		}
	}
}
int SeqListSize(PSeqList ps)
{
	assert(ps);
	return ps->size;
}
int SeqListCapacity(PSeqList ps)
{
	assert(ps);
	return ps->capacity;
}
int SeqListEmpty(PSeqList ps)
{
	assert(ps);
	if (ps->size == 0)
		return TURE;
	return FALSE;
}
DataType SeqListFront(PSeqList ps)
{
	DataType ret = 0;
	ret = ps->array[0];
	return ret;
}
DataType SeqListBack(PSeqList ps)
{
	DataType ret = 0;
	ret = ps->array[ps->size - 1];
	return ret;
}
void SeqListDestory(PSeqList ps)
{
	assert(ps);
	if (ps->array)
	{
		free(ps->array);
		ps->array = NULL;
		ps->size = 0;
		ps->capacity = 0;
		printf("消除成功\n");
	}
}