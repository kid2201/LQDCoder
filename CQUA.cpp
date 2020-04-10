#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int main()
{
    int n;
    int a[200];
    cin>>n;
    FOR(i,1,n) cin>>a[i];
    long long sum100=0,sum200=0;
    FOR(i,1,n)
    if (a[i]==100) sum100++; else sum200++;
    if (sum100%2!=0) cout<<"NO";
    else
        if (sum200%2!=0 && sum100==0) cout<<"NO";
        else cout<<"YES";
}
    
