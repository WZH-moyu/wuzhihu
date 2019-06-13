#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<int> v;
		v.resize(n + 1);
		for (int i = 1; i < n + 1; i++)
		{
			v[i] = i;
		}
		string s1;
		//s1.resize(10);
		cin >> s1;
		int i = 1;
		if (n <= 4)
		{
			for (int j = 0; j < s1.size(); j++)
			{
				if ((s1[j] == 85) && (i == 1))
				{
					i = 4;
				}
				else if ((s1[j] == 68) && (i == 4))
				{
					i = 1;
				}
				else if ((s1[j] == 85) && i > 1)
				{
					i--;
				}
				else if ((s1[j] == 68) && i < 4)
				{
					i++;
				}
			}
			for (int j = 1; j < n + 1; j++)
			{
				cout << v[j]<<' ';
			}
		}
		else
		{
			for (int j = 0; j < s1.size(); j++)
			{
				if ((s1[j] == 85) && (i == 1))
				{
					i = n;
				}
				else if ((s1[j] == 68) && (i == n))
				{
					i = 1;
				}
				else if (s1[j] == 68 && i < n)
				{
					i++;
				}
				else if (s1[j] == 85 && i > 1)
				{
					i--;
				}
			}
			if (i >= n - 4)
			{
				for (int j = n-4; j < n; j++)
				{
					cout << v[j] << ' ';
				}
			}
			else if (i <= 4)
			{
				for (int j = 1; j < 5; j++)
				{
					cout << v[j] << ' ';
				}
			}
			else
				for (int j =i/4+4; j < i/4+8; j++)
				{
					cout << v[j] << ' ';
				}
		}

		cout << endl;
		cout << v[i] << endl;
		v.clear();
		s1.clear();
	}

	return 0;
}