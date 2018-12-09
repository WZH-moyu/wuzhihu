#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
struct contact 
{
	char name[20];
	short int age;
	char sex[4];
	char address[20];
	char tel[12];
};
struct contact con;
int judge(x)
{
	switch (x)
	{
	case 1: Add(&con);
		break;
	case 2: Delete(&con);
		break;
	case 3: Modify(&con);
		break;
	case 4: Find(&con);
		break;
	case 5: Sequence(&con);
		break;
	case 6: Print(&con);
		break;
	case 0: Quit();
		break;
	default:
		printf("选择错误，请重新选择\n");
		nume(x);
		break;
	}
}
void  nume(x)
{
	printf("请选择\n");
	printf("*********************************************\n");
	printf("********1.Add                2.Delete   *****\n");
	printf("********3.Modify             4.Find    ******\n");
	printf("********5.Sequence           6.Print   ******\n");
	printf("********0.Quit                         ******\n");
	printf("*********************************************\n");
	scanf("%d\n", &x);
	judge(x);
}
void test()
{
	int x = 0;
	nume(x);
}
int main()
{
	int *p = NULL;
	init(p);
	test();
	system("pause");
	return 0;
}