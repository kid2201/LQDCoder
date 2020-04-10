#include <bits/stdc++.h>
using namespace std;
long long a[100000000];
int main ()
{
	long long T,N,K,i,j;
	cin>>T;
	for (i=1;i<=T;i++)
	{cin>>N>>K;
	for (j=1;j<=N;j++) cin>>a[j];
	sort (a+1 , a+1+N);
	if (a[1]>=K) cout<<0<<endl;
	else cout<<K-a[1]<<endl;
	};
	
}
    
