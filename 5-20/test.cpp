#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n=0;
    int j=0;
    while(cin>>n)
    {
        long long sum=0;
        vector<int> a;
        a.resize(3*n);
        for(int i=0;i<(3*n);i++)
        {
            cin>>a[i];
        }
        std::sort(a.begin(),a.end());
        for(int i=n,j=(3*n)-2;i<=j;j-=2)
        {
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}

