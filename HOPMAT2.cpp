#include<bits/stdc++.h>

using namespace std;

struct hm
{
	long long bd,kt,tien;
};

bool ss( hm x,hm y)
{
	return (x.bd<y.bd);
}

long long n,t,d[5001],ma;
hm a[5001];

int main()
{
	cin >> n;
	for (int i=1;i<=n;i++)
		cin>>a[i].bd>>a[i].kt>>a[i].tien;
	sort(a+1,a+1+n,ss);
	for (int i=1;i<=n;i++)
		{
			d[i]=a[i].tien;
			for (int j=1;j<i;j++)
				if ((a[j].kt<=a[i].bd) && (d[i]<d[j]+a[i].tien))
					d[i]=d[j]+a[i].tien;
		ma=max(ma,d[i]);
		}
	cout<<ma;
	
}
    
