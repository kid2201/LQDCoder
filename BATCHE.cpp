#include <bits/stdc++.h>
using namespace std;
struct bc
{
    long long l,r;
};

bc a[100005];

bool ss(bc x , bc y)
{
    return x.l<y.l;
}
long long n, i, l, r, kq = 0;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i].l>>a[i].r;
    sort(a+1,a+1+n,ss);
    l=a[1].l;
    r=a[1].r;
    for (i=2;i<=n;i++){
        if (a[i].l<=r) r=max(r,a[i].r);
    	else{
			    l=a[i].l;
			    r=a[i].r;
    	    }
    	kq=max(kq,r-l);
    }
    cout<<kq;
}
    
