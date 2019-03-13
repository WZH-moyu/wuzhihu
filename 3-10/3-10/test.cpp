#include<iostream>
//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
class Solution {
public:
	class Sum{
	public:
		Sum(){
			_sum += _i;
			++_i;
		}
	};
	int Sum_Solution(int n) {
		_sum = 0;
		_i = 1;
		Sum arr[n];
		return _sum;
	}
private:
	static int _sum;
	static int _i;
};
int Solution::_sum = 0;
int Solution::_i = 1;
#include<iostream>
using namespace ::std;
int main()
{
	int days[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	int year, month, day;
	while (cin >> year >> month >> day){
		int total = days[month - 1] + day;
		if (month>2){
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
				total += 1;
			}
		}
		cout << total << endl;
	}
	return 0;
}