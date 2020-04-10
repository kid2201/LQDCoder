#include<iostream>
using namespace std;
long long t,a[100000000],r,l,n,res;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        t=a[i];
        a[i]=0;
        r=(i+t%n+1)%n;
        if(r==0) r=n;
        l=((i-t%n-1)+n)%n;
        if(l==0) l=n;
        res=max(res,max(a[l],a[r])+t/n);
        a[i]=t;
    }
    cout<<res;
}
    
