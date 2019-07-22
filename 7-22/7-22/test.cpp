#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
//////斐波那契数列
////1.递归算法
//class Solution {
//public:
//	int Fibonacci(int n) {
//		if (n < 1)
//			return 0;
//		if (n == 1 || n == 2)
//			return 1;
//		return (Fibonacci(n - 1) + Fibonacci(n - 2));
//	}
//};
////动态规划
//class Solution {
//public:
//	int Fibonacci(int n) {
//		std::vector<int> v;
//		v.resize(n + 1);
//		v[0] = 0;
//		v[1] = 1;
//		for (int i = 2; i <= n; ++i)
//		{
//			v[i] = v[i - 1] + v[i - 2];
//		}
//		return v[n];
//	}
//};
////动态规划优化版本，只保存前两个结果
//class Solution {
//public:
//	int Fibonacci(int n) {
//		if (n <= 0)
//			return 0;
//		if (n == 1 || n == 2)
//			return 1;
//		int a = 1;
//		int b = 1;
//		int temp = 0;
//		for (int i = 3; i <= n; i++)
//		{
//			temp = a + b;
//			a = b;
//			b = temp;
//		}
//		return temp;
//	}
//};
//////青蛙变态跳台阶，一次可以跳一阶，两阶……N阶
////动态规划
////分析：
///*状态：    子状态：跳上1级，2级，3级，...，n级台阶的跳法数    f(n)：还剩n个台阶的跳法数      
//状态递推：    n级台阶，第一步有n种跳法：
//跳1级、跳2级、到跳n级    跳1级，剩下n - 1级，则剩下跳法是f(n - 1)   
//跳2级，剩下n - 2级，则剩下跳法是f(n - 2)    
//f(n) = f(n - 1) + f(n - 2) + ... + f(n - n)   
//f(n) = f(n - 1) + f(n - 2) + ... + f(0)    
//f(n - 1) = f(n - 2) + ... + f(0)   
//f(n) = 2 * f(n - 1)   
//初始值：    f(1) = 1    f(2) = 2 * f(1) = 2    f(3) = 2 * f(2) = 4    f(4) = 2 * f(3) = 8    
//所以它是一个等比数列    f(n) = 2 ^ (n - 1)      返回结果：f(N)*/
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number <= 0)
//			return 0;
//		if (number == 1)
//			return 1;
//		int total = 1;
//		for (int i = 2; i <= number; i++)
//			total *= 2;
//		return total;
//	}
//};
////优化
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number <= 0)
//			return 0;
//		return 1 << (number - 1);
//	}
//};
//////青蛙跳台阶
//class Solution {
//public:
//	int jumpFloor(int number) {
//		if (number <= 0)
//			return 0;
//		if (number == 1)
//			return 1;
//		if (number == 2)
//			return 2;
//		int a = 1;
//		int b = 2;
//		int temp = 0;
//		for (int i = 3; i <= number; i++)
//		{
//			temp = a + b;
//			a = b;
//			b = temp;
//		}
//		return temp;
//	}
//};
//////矩形覆盖（依旧是斐波那契数列问题，只不过第一个数和第二个数分别是1和2）
//class Solution {
//public:
//	int rectCover(int number) {
//		if (number <= 0)
//			return 0;
//		if (number == 1)
//			return 1;
//		if (number == 2)
//			return 2;
//		return (rectCover(number - 1) + rectCover(number - 2));
//	}
//};
//////最大连续子数组和
///* 方法：动态规划 
//状态：  子状态：长度为1，2，3，...,n的子数组和的大值  
//F(i):长度为i的子数组和的大值，这种定义不能形成递推关系，舍弃 
// F(i):以array[i]为末尾元素的子数组和的大值 状
// 态递推：  F(i) = max(F(i-1) + array[i]，array[i])  
//		   F(i) = （F(i-1) > 0）? F(i-1) + array[i] : array[i]
//初始值：F(0) = array[0] 
//返回结果：  maxsum：所有F(i)中的大值 */
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(std::vector<int> array) {
//		if (array.empty())
//			return -1;
//		int sum = array[0];
//		int summax = array[0];
//		for (int i = 1; i < array.size(); i++)
//		{
//			sum = std::max(array[i] + sum, array[i]);
//			summax = std::max(sum, summax);
//		}
//		return summax;
//	}
//};
////左右最值最大差
//int findMaxGap(std::vector<int> A, int n) {
//	// write code here
//	if (A.empty())
//		return 0;
//	if (A.size() == 1)
//		return 0;
//	int left = A[0];
//	int right = A[1];
//	int ret = 0;
//	int m = 0;
//	std::vector<int> v;
//	v.resize(n - 1);
//	for (int i = 0; i < n - 1; i++)
//	{
//		right = A[i + 1];
//		for (int j = i + 1; j < n; j++)
//		{
//			left = std::max(left, A[i]);
//			right = std::max(right, A[j]);
//		}
//		ret = abs(left - right);
//		v[i] = ret;
//	}
//	for (int i = 0; i < n - 1; i++)
//		m = std::max(m, v[i]);
//	return m;
//}
//	int main()
//	{
//		std::vector<int> V = {2,7,3,1,1};
//		int n = V.size();
//		int ret = findMaxGap(V, n);
//		std::cout << ret << std::endl;
//		return 0;
//	}
////顺时针打印矩阵
////数据库连接池
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//int main()
//{
//	int num = 0;
//	while (std::cin >> num)
//	{
//		int m = 0;
//		std::vector<int> v;
//		v.resize(num);
//		int ret = 0;
//		for (int i = 0; i < num; i++)
//		{
//			std::string s1;
//			std::string s2;
//			std::cin >> s1;
//			std::cin >> s2;
//			if (s2[0] == 'c')
//				ret++;
//			else
//				ret--;
//			v[i] = ret;
//		}
//		for (int i = 0; i < num; i++)
//		{
//			if (m < v[i])
//				m = v[i];
//		}
//		std::cout << m << std::endl;
//	}
//}