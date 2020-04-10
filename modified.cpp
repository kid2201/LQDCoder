#include<bits/stdc++.h>
using namespace std;
long long A[1000001],n,k,s,i,t=0;
int main ()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {cin>>A[i];s+=A[i];}
    sort(A+1, A+1+n, greater<int>());
    if(s<k)
    {
        cout<<"-1";
        return 0;
    }
    else{
    i = 1;
    while(s>k && i<=n)
    {
        s-=A[i]+1;
        t++;
        i++;
    }
    if(s<=k) cout<<t;}
}
    
