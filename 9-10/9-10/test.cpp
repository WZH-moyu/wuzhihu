//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int num1, num2;
//	cin >> num1 >> num2;
//	int ret = 0;
//	int j = num1;
//	for (int i = 0; i < num2 - num1 + 1; i++)
//	{
//		while (j <= num2)
//		{
//			ret += j * (pow(10, i));
//			j++;
//			break;
//		}
//	}
//	int count = 0;
//	int tmp = num1;
//	while (tmp <= ret)
//	{
//		if (tmp % 3 == 0)
//			count++;
//		tmp++;
//	}
//	cout << count << endl;
//	return 0;
//}
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num1, num2;
	while (cin >> num1 >> num2)
	{
		int ret = 0;
		int count = 0;
		int j = num1;
		int s = j;
		while (j <= num2)
		{
			for (int i = 0; i < num2 - num1 + 1; i++)
			{
				while (j <= num2)
				{
					ret += j * (pow(10, i));
					if (ret != j)
					{
						if (ret % 3 == 0)
							count++;
					}
					j++;
					break;
				}
			}
			s++;
			j = s;
		}
		cout << count << endl;
	}

	return 0;
}
