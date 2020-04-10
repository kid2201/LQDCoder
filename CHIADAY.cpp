#include<bits/stdc++.h>
using namespace std;

long long n,a[1000005],T1,T2;
long long kq,m=1e18;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin>>n;
	for (long long i=1; i<=n; i++) cin>>a[i];
	T1 = 0;
	for (long long i=1; i<=n; i++) T2 = T2 + a[i];
	
	for (long long k=1; k<=n-1; k++)
	{
		T1 = T1+a[k];
		T2 = T2-a[k];
		if (m > abs(T1-T2)) 
		{
			kq = k;
			m = abs(T1-T2);
		}
	}
	cout<<kq;
}
    