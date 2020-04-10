#include<bits/stdc++.h>
	using namespace std;
	string a[100000],t;
	long long n;
	int main()
	{
		long long v,Max=0;
		cin>>n;
		for (long long i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+1+n);
			for (long long i=1;i<=n;i++)
		{
			cout<<a[i]<<endl;
		}
		sort(a+1,a+1+n);
//		for (long long i=2;i<=n;i++)
//		{
//			int j=0,l=min(a[i].size()-1,a[i-1].size()-1);
//			while(j<=l&&a[i][j]==a[i-1][j])
//			{
//				j++;
//				if (j>Max) Max=j,v=i;
//			}
//		}
//		t=a[v].substr(0,Max);
//		cout<<t;
	}
    
