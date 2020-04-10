#include <bits/stdc++.h>
using namespace std;
struct PHU
{
	long long l,r;
};
PHU A[10001];
bool ss(PHU x,PHU y)
{
	if(x.l==y.l) return x.r>y.r;
	else return x.l<y.l;
}
int main()
{
	ios_base::sync_with_stdio(0);
	long long L,R,n,i,k,t,m=0;
	cin>>n;
	for(i=1;i<=n;i++) cin>>A[i].l>>A[i].r;
	sort(A+1,A+1+n,ss);
	L=A[1].l;R=A[1].r;
	for(i=2;i<=n;i++)
	{
		if(A[i].l<=R) R=max(R,A[i].r);
		else
		{
			m=max(R-L,m);
			L=A[i].l;R=A[i].r;
		}
	}
	m=max(R-L,m);
	cout<<m;
}
    