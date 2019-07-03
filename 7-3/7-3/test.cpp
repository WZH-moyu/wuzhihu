//变态跳台阶
class Solution {
public:
	int jumpFloorII(int number) {
		/*vector<int> v;
		v.resize(number+1);
		v[0]=0;
		v[1]=1;
		v[2]=2;
		for(int i=3;i<=number;i++)
		{
			v[i]=v[i-1]+v[i-2];
		}
		return v[number];*/
		if (number < 0)
			return -1;
		else if (number == 0)
			return 0;
		else if (number == 1)
			return 1;
		else
			return jumpFloorII(number - 1) + jumpFloorII(number - 1);
	}
};
//快到碗里来
#include<iostream>
using namespace std;
int main()
{
	double n = 0, r = 0;
	while (cin >> n >> r)
	{
		double d = 0;
		d = 2 * 3.14*r;
		if (d < n)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}