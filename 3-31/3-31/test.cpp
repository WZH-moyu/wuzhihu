#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
using namespace std;
int main()
{
	list<int> l1;
	list<int> l2(10,3);
	list<int> l3(l2.begin(),l2.end());
	vector<int> v2(5,5);
	list<int> l4(v2.begin() + 1, v2.end() - 1);
	system("pause");
	return 0;
}