#include<iostream>
using namespace std;
long long a[10000001],n;
bool kt(long long x)
{
    long long s=0;
    for (long long i=1;i<=n;i++)
    {
        s=s+a[i];
        if (s==x) s=0;
        if (s>x) return 0;
    }
    return 1;
}
int main()
{
    long long i,t=0,s=0,m,k=0;
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        t=t+a[i];
    }
    m=n;
    for (;m>=1;m--)
    {
        if (t%m==0)
        {
            s=t/m;
            if (kt(s)==true)
            {
                cout<<m;return 0;
            }
        }
    }
}
    