#include<bits/stdc++.h>
using namespace std;
long long a[100000005];
long long b[100000005];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    b[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==a[i-1])
        {
            b[i]=2*b[i-1]%1000000007;
        }
        else
        {
            b[i]=b[i-1]%1000000007;
        }
    }
    cout<<b[n]%1000000007;
}
    
