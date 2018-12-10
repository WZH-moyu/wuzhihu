#ifndef __CONTACT_H__
#define __CONTACT_H__


#include <stdio.h>
#include "string.h"
#include <assert.h>
#include <stdlib.h>


#define MAX_NAME 25
#define MAX_TELE 12
#define MAX_ADDR 25
#define MAX_SEX 10
#define DEFAULT_SZ 3//默认容量
#define DEFAULT_INC 2//默认增容容量



typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char sex[MAX_SEX];
}PeoInfo;

typedef struct Contact
{
	PeoInfo *date;
	int sz;//实际个数
	int capacity;//容量
}Contact, *pCon;

void InitContact(Contact *p);//初始化
void AddContact(Contact *p);//添加联系人
void ShowContact(Contact *p);//显示联系人
void SearchContact(Contact *p);//查找联系人
void DelContact(Contact *p);//删除联系人
void EmptyContact(Contact *p);//清空联系人
void SortContact(Contact *p);//排序联系人
void ReverseContact(Contact *p);//修改联系人
void DestroyContact(Contact *p);//销毁




#endif // __CONTACT_H__
