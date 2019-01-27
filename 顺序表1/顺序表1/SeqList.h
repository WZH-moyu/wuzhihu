#ifndef __SeqList_H__
#define __SeqList_H__
#define TURE 1;
#define FALSE 0;
typedef int DataType;//定义数据类型
typedef struct SeqList
{
	DataType* array;//存储的信息
	int size;//有效的元素个数
	int capacity;//容量
}SeqList, *PSeqList;
void SeqListInit(PSeqList ps);//初始化
void SeqListPrint(PSeqList ps);//打印
void CheakCapacity(PSeqList ps);//检查是否已满，增容
void SeqListPushBack(PSeqList ps, DataType data);//尾插
void SeqListPopBack(PSeqList ps);//尾删
void SeqListPushFront(PSeqList ps, DataType data);//头插
void SeqListPopFront(PSeqList ps);//头删
void SeqListInsert(PSeqList ps, int pos, DataType data);//任意位置插入
void SeqListErase(PSeqList ps, int pos);//在任意位置删除
int SeqListFind(PSeqList ps, DataType data);//查找顺序表中值为data的元素的位置
void SeqListRemove(PSeqList ps, DataType data);//移除顺序表中第一个值为data的元素
void SeqListRemoveAll(PSeqList ps, DataType data);//移除顺序表中所有值为data的元素
int SeqListSize(PSeqList ps);//获取顺序表有效元素的个数
int SeqListCapacity(PSeqList ps);//获取顺序表的容量
int SeqListEmpty(PSeqList ps);//检查顺序表是否为空
DataType SeqListFront(PSeqList ps);//获取顺序表中的第一个元素
DataType SeqListBack(PSeqList ps);//获取顺序表中的最后一个元素
void SeqListDestory(PSeqList ps);//消除（与初始化成对出现）
#endif//__SeqList_H__