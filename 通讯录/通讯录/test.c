#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 1
#define _CRT_SECURE_NO_DEPRECATE 1
#include "Contact.h"


void menu()
{
	printf("********************************\n");
	printf("***  1.add         2.search  ***\n");
	printf("***  3.del         4.empty   ***\n");
	printf("***  5.sort        6.revise  ***\n");
	printf("***  7.show        0.exit    ***\n");
	printf("********************************\n");
}






enum
{
	EXIT,
	ADD,
	SEARCH,
	DEL,
	EMPTY,
	SORT,
	REVISE,
	SHOW
};

Contact con;


void test()
{
	int input = 0;
	InitContact(&con);
	do
	{
		menu();
		printf("请输入你的选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case REVISE:
			ReverseContact(&con);
			break;
		case EXIT:
			DestroyContact(&con);
			break;
		default:
			printf("输入有误，请重新输入：>\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}
