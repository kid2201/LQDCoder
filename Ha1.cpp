#include<bits/stdc++.h>
using namespace std;
long long A[10000001],n,k,s=0,i,t=0;
int main ()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {cin>>A[i];s+=A[i];}
   // cout<<s<<" "<<k<<endl;
    if(s<k)
    {
        cout<<"-1";
        return 0;
    }
    else{
    sort(A+1, A+1+n, greater<int>());
    i=0;
    while(i<n && s>k)
    {
        i++;
        s-=A[i]-1;
        t++;
        //cout<<A[i]<<" "<<s<<endl;
    }
    if(s<=k) cout<<t;
	else cout<<-1;
	}
}
