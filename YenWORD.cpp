#include <bits/stdc++.h>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	string a,b;
	getline (cin, a);
	long long n=a.size()-1,k,i,Max=-1e9, Max1=-1e9,h,tong=0,dem=0,q,dau;
	for (i=0;i<=n;i+=dem+1)
	{
		
		dem=0;
		tong=0;
		h=i;
		while (a[h] != ' ' && h<=n)
		{
			dem+=1;
			h++;
			tong+=a[h];
			
		}
		if (dem>=Max && tong>Max1)
		{
			Max=dem;
			Max1=tong;
			dau=i;	
		}
	}
	for (q=dau;q<=dau+Max-1;q++) cout<<a[q];
}
