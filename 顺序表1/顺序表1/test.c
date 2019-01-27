#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"
#include <stdio.h>
int main()
{
	SeqList seq;
	SeqListInit(&seq);//初始化
	SeqListPrint(&seq);//打印
	SeqListPushBack(&seq, 3);//尾插
	SeqListPushBack(&seq, 2);
	SeqListPushBack(&seq, 5);
	SeqListPushBack(&seq, 1);
	SeqListPushBack(&seq, 1);
	SeqListPopBack(&seq);//尾删
	SeqListPushFront(&seq, 1);//头插
	SeqListPushFront(&seq, 0);
	SeqListPushFront(&seq, 9);
	SeqListPopFront(&seq);//头删
	SeqListInsert(&seq, 2, 6);//任意位置插入
	SeqListErase(&seq, 0);//任意位置删除
	SeqListPrint(&seq);//打印
	printf("%d\n", SeqListFind(&seq, 6));//查找顺序表中值为data的元素的位置
	SeqListRemove(&seq, 2);//移除顺序表中第一个值为data的元素
	SeqListPrint(&seq);//打印
	SeqListRemoveAll(&seq, 1);//移除顺序表中所有值为data的元素
	SeqListPrint(&seq);//打印
	printf("%d\n", SeqListSize(&seq));//获取顺序表有效元素的个数
	printf("%d\n", SeqListCapacity(&seq));//获取顺序表的容量
	printf("%d\n", SeqListEmpty(&seq));//检查顺序表是否为空
	printf("%d\n", SeqListFront(&seq));//获取顺序表中的第一个元素
	printf("%d\n", SeqListBack(&seq));//获取顺序表中的最后一个元素
	SeqListDestory(&seq);//消除
	return 0;
}