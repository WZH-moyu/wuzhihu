#include<iostream>
using namespace std;
int main()
{
	int * pi = (int*)malloc(sizeof(int)* 20);
	free(pi);
	char* pc = (char*)malloc(20);
	char*ppc = (char*)realloc(pc,40);
	free(ppc);
	int *pa = new int(1);
	delete pa;
	int *pb = new int[10];
	delete []pb;
	return 0;
}
class A{
public:
	A()
	{

	}
};
