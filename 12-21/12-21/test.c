#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
	float pi = 0;
	int sign = 1;       // 正负符号 
	float deno = 1;     // 分母
	float item = 1;     // 项 
	// fabs是求绝对值的函数，在math.h中声明，在math.c中定义
	// 1e-6中的"-"左右两侧不能有空格；等价于0.000001。同理1e-3等价于0.001 
	while (fabs(item) >= 1e-6)
	{
		pi += item;
		sign = -sign;   // 根据公式，每计算一项，就得变动一次正负号 
		deno += 2;       // 分母每次都自加2 
		item = sign / deno; // 第几项的值，用于下一轮计算 
	}

	pi = 4 * pi;
	printf("pi = %f\n", pi);
	system("pause");
	return 0;
}

