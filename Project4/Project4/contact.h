#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef struct pint
{
	char name;
	short int age;
	char sex;
	char address;
	char tel;
}pint;
typedef struct contact
{
	pint * data;
	int sz;
}contact,*p;
int *init(int *p);
void Add(int *p);