#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void Add(contact *p)
{
	assert(p != NULL);
	printf("请输入姓名\n");
	scanf("%s", p->data[p->sz].name);
	printf("请输入年龄\n");
	scanf("%d", p->data[p->sz].age);
	printf("请输入性别\n");
	scanf("%s", p->data[p->sz].sex);
	printf("请输入地址\n");
	scanf("%s", p->data[p->sz].address);
	printf("请输入电话\n");
	scanf("%s", p->data[p->sz].tel);
}