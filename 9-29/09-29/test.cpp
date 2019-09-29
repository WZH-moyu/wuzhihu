#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n, w;
	while (cin >> n >> w)
	{
		vector<int>v1;
		vector<int>v2;
		v1.resize(n);
		v2.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v1[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> v2[i];
		}
		int ret = 0;
		for (int i = 0; i < n; i++)
		{
			if (v1[i] <= w)
			{
				if ((i + 1 < n) && (v1[i] + v1[i + 1] <= w) )
				{
					if ((i + 2 < n) && (v1[i] + v1[i + 1] + v2[i + 2] <= w))
					{
						ret += max(v2[1], max(v2[i + 1], v2[i + 2]));
						i += 2;
					}
					else
					{
						ret += max(v2[i], v2[i + i]);
						i++;
					}
				}
				else
					ret += v2[i];
			}
		}
		cout << ret << endl;
	}
}