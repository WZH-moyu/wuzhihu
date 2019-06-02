#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <iostream>
using namespace std;
//void main() 
//{    
//	int x=3,y=3;    
//	switch(x%2) {       
//	case 1:            
//		switch (y) {       
//		case 0:cout<<"first";        
//		case 1:cout<<"second";break;        
//		default: cout<<"hello";   
//		}    
//	case 2:cout<<"third";   
//	case 3:cout << "nihao";
//	}
//	system("pause");
//}
#include<stdio.h>
#define N 9 
int x[N]; 
int ret = 0;
void dump() 
{ 
	int i = 0; 
	for (i = 0; i < N; i++) 
	{ 
		printf("%d", x[i]);
	} 
	printf("\n");
}
void swap(int a, int b) 
{ 
	int t = x[a];  
	x[a] = x[b];  
	x[b] = t; 
}
void run(int n) 
{ 
	int i; 
	if (N - 1 == n) 
	{ 
		dump();    
		ret ++;    
		return; 
	}  
	for (i = n; i < N; i++) 
	{ 
		swap(n, i);  
		run(n + 1);   
		swap(n, i); 
	}
}
int main() 
{ 
	int i; 
	for (i = 0; i < N; i++) 
	{ 
		x[i] = i + 1; 
	} 
	run(0); 
	printf("* Total: %d\n", ret);
	system("pause");
	return 0;
}
