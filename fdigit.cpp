#include<bits/stdc++.h>
using namespace std;
long long i,n,dem=0,a[100000001],s,g,h;
int main()
{
	cin>>n;
	g=n;
	h=n;
	while(n!=0)
    {
        g=h;
        s=n%10;
        if(s!= 0 && g%s==0)
        {
            dem++;
        }
        n=n/10;
    }
    cout<<dem;
}
