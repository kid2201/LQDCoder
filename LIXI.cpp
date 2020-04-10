#include <bits/stdc++.h>
using namespace std;
long long n ,k,a[100005],i,res = 0, sum=0;

int main()
{
    cin>>n>>k;
    for (i = 1; i <= n; i++) cin>>a[i];
    for (i = 1; i <= n-2 ; i++)
    if (a[i] + a[i+1] + a[i+2] >= k) res ++;
    cout<<res;
}