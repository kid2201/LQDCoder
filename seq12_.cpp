#include<bits/stdc++.h>
using namespace std;
long long n,v,a[1000001],i,j,res;
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>v;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    j=1;
    for (i=1;i<=n;i++) if (a[i]>=v) break;
    for (;i<=n;i++)
    {
        while (a[i]-a[j]>=v) j++;
        res=res+j;
    }
    cout<<res;
}
