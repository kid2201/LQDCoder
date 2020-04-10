#include<bits/stdc++.h>
using namespace std;
long long n,t,re,a[100001],s[100001];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    cin>>n>>t;
    for (long long i=1;i<=n;i++)
    {
        cin>>a[i]; s[i]=s[i-1]+a[i];
    }
    for (long long i=1;i<=n;i++) cout<<s[i]<<" ";
    for (long long i=1;i<=n;i++)
    {
        long long l=1,r=i,d=0;
        while (l<=r)
        {
            long long m=(l+r)/2;
            if (s[i]-s[m-1]<=t)
            {
                d=i-m+1; r=m-1;
            } else l=m+1;
        } re+=d;
    }
    cout<<re;
}
    
