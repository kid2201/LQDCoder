#include <bits/stdc++.h>
using namespace std;
long long a[100005];
long long n,i,tong=0,Max=0,k;

long long ts(long long a)
{
	long long i,dem=0,k=sqrt(a);
	for(i=2;i<=k;i++)
	{
		while (a%i==0)
		{
			dem++;
			a=a/i;
		}
	}
	if (a>1) dem++;
	return dem;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin.tie(0);
	
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
		k=ts(a[i]);
		tong+=k;
		Max=max(Max,k);
    }
	cout<<tong-Max;
}

