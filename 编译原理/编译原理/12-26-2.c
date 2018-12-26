#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct
{
	char data[10];
	int top;
} 
message;//栈内元素对象 
void create(message *&m)
{
	m=(message *)malloc(sizeof(message));
	m->top=-1;
}
void push(message *&m,char i)//进栈操作 
{
	if(m->top<10)
	{
		m->top++;m->data[m->top]=i;
	}
	else
		cout<<"栈满";
}
char pop(message *&m) //出栈操作 
{
	char i;
	if(m->top!=-1)
	{
		i=m->data[m->top];
		m->top--;
		return i;
	}
	else
		cout<<"栈空";
}
void getStr(char str[]) //将输入的以$结尾的字符串 保存于字符串数组中
{
	int j=0;
	while(true)
	{
		cin>>str[j];
		if(str[j]=='$')
			break;
		elsej++;
	}
}
int main()
{
	char b[5][6]={
		{'>','<','<','<','>','>'},//自定义分析表分析表 
		{'>','>','<','<','>','>'},
		{'>','>',' ',' ','>','>'},
		{'<','<','<','<','=','>'},
		{'>','>',' ',' ','>','>'}
	};
	message *m;
	int n;
	create(m);
	cout<<"输入字符串，字符串以$结尾，例如 (i+i)*i$"<<endl;
	char str[20];
	getStr(str); //获取以$结尾字符串     
	char *j=str;
	push(m,'$');
	push(m,*j);
	j++;//构造符号栈结构保存每一次的变化 
	while(true)
	{
		if(m->data[m->top]=='v'&& m->data[m->top-1]=='+' && m->data[m->top-2]=='v')//素短语v+v
		{  
			pop(m);
			pop(m);  
			pop(m);
			push(m,'v');
		}
		else if(m->data[m->top]==')' && m->data[m->top-1]=='v' && m->data[m->top-2]=='(')//素短语(v)  
		{ 
			pop(m);
			pop(m);
			pop(m);
			push(m,'v');
		}
		else if(m->data[m->top]=='v' && m->data[m->top-1]=='*' && m->data[m->top-2]=='v')//素短语v*v  
		{  
			pop(m); 
			pop(m); 
			pop(m); 
			push(m,'v');
		}    //外层等于+++  
		else if(m->data[m->top]=='+')   
		{    
			int m1=0;   
			switch(*j)   
			{        
			case '+':n=0;
				break;   
			case '*':n=1;
				break;   
			case 'i':n=2;
				break;   
			case '(':n=3;
				break;   
			case ')':n=4;
				break;   
			case '$':n=5;
				break;    
			}    
			if(b[m1][n]=='>')  
			{    
				pop(m); 
				push(m,'v');  
			}    else  
			{      
				push(m,*j);
				j++;   
			}    
		}        //外层等于+++                  //外层等于***   
		else if(m->data[m->top]=='*')   
		{   
			int m1=1;  
			switch(*j)  
			{    
			case '+':n=0;
				break;    
			case '*':n=1;
				break;  
			case 'i':n=2;
				break;    
			case '(':n=3;
				break;  
			case ')':n=4;
				break;   
			case '$':n=5;
				break;   
			}    
			if(b[m1][n]=='>')  
			{    
				pop(m); 
				push(m,'v'); 
			}    else    
			{      
				push(m,*j);  
				j++;     
			}    
		}    //外层等于***         //外层等于iii   
		else if(m->data[m->top]=='i')   
		{   
			int m1=2;  
			switch(*j)  
			{   
			case '+':n=0;
				break;  
			case '*':n=1;
				break;   
			case 'i':n=2;
				break;  
			case '(':n=3;
				break;  
			case ')':n=4;
				break;   
			case '$':n=5
				break;  
			}    
			if(b[m1][n]=='>')   
			{    
				pop(m);   
				push(m,'v'); 
			}    
			else   
			{    
				push(m,*j);   
				j++;    
			}    
		}    //外层等于iii          //外层等于（（（  
		else if(m->data[m->top]=='(')  
		{    
			int m1=3;  
			switch(*j)   
			{    
			case '+':n=0;break;  
			case '*':n=1;break;   
			case 'i':n=2;break;   
			case '(':n=3;break;   
			case ')':n=4;break;   
			case '$':n=5;break;  
			}   
			if(b[m1][n]=='>') 
			{   
				pop(m);   
				push(m,'v');    } 
			else    
			{    
				push(m,*j);  
				j++;    
			}    
		}    //外层等于（（（         //外层等于））））  
		else if(m->data[m->top]==')')  
		{   
			int m1=4;  
			switch(*j)   
			{    
			case '+':n=0;break; 
			case '*':n=1;break;   
			case 'i':n=2;break;    
			case '(':n=3;break;    
			case ')':n=4;break;   
			case '$':n=5;break; 
			}    if(b[m1][n]=='>')  
			{   
				pop(m);   
				push(m,'v');  
			}    else    
			{     
				push(m,*j);   
				j++;   
			}    
		}//外层等于））））  //内层以有v开始部分 
		else if(m->data[m->top]=='v')  
		{    
			if(*j=='$') 
			{     
				if(m->data[m->top-1]=='$')  
				{   
					cout<<"这是一个句子";   
					break;   
				}       
				else    
				{     
					cout<<"这不是一个句子";  
					break;       
				}    
			}      //内层+++ 
			else if(m->data[m->top-1]=='+')  
			{    
				int m1=0;   
				switch(*j) 
				{  
				case '+':n=0;break;  
				case '*':n=1;break; 
				case 'i':n=2;break;  
				case '(':n=3;break;    
				case ')':n=4;break;   
				case '$':n=5;break;  
				}    
				if(b[m1][n]=='>')  
				{    
					pop(m);    push(m,'v');  
				}    
				else   
				{     
					push(m,*j);   
					j++;    
				}   
			}     //内层*** 
			else if(m->data[m->top-1]=='*') 
			{    
				int m1=1;   
				switch(*j)   
				{   
				case '+':n=0;break;  
				case '*':n=1;break;   
				case 'i':n=2;break; 
				case '(':n=3;break;   
				case ')':n=4;break;   
				case '$':n=5;break;   
				}   
				if(b[m1][n]=='>')   
				{   
					pop(m); 
					push(m,'v');   
				}    else   
				{     
					push(m,*j);    
					j++;    
				}    
			}//内层iii 
			else if(m->data[m->top-1]=='i')  
			{    
				int m1=2;   
				switch(*j) 
				{    
				case '+':n=0;break;  
				case '*':n=1;break;  
				case 'i':n=2;break;  
				case '(':n=3;break;   
				case ')':n=4;break;   
				case '$':n=5;break; 
				}    
				if(b[m1][n]=='>')  
				{    
					pop(m);  
					push(m,'v');   
				}    
				else  
				{   
					push(m,*j);  
					j++;  
				}    
			}//内层（（（ 
			else if(m->data[m->top-1]=='(')  
			{   
				int m1=3; 
				switch(*j)
				{   
				case '+':n=0;break;  
				case '*':n=1;break;  
				case 'i':n=2;break;    
				case '(':n=3;break;   
				case ')':n=4;break;  
				case '$':n=5;break;  
				}  
				if(b[m1][n]=='>')  
				{   
					pop(m);    push(m,'v');  
				}    else   
				{      
					push(m,*j);   
					j++;    
				}   
			}//内层）））
			else if(m->data[m->top-1]==')') 
			{    
				int m1=4;
				switch(*j) 
				{  
				case '+':n=0;break;  
				case '*':n=1;break; 
				case 'i':n=2;break; 
				case '(':n=3;break;  
				case ')':n=4;break;   
				case '$':n=5;break;  
				}    
				if(b[m1][n]=='>')  
				{   
					pop(m); 
					push(m,'v'); 
				}    
				else  
				{    
					push(m,*j); 
					j++;    
				} 
			}    //内层以有v开始部分 //外层$$$ 
			else if(m->data[m->top-1]=='$')
			{
				push(m,*j);   
				j++;
			} // 外层$$$   
  }   
}  
return 0; 
}


