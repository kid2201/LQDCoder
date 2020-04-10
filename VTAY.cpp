// code VONG TAY_ CB01
#include<bits/stdc++.h>
using namespace std;
long long n,d,k;
int main()
{
	cin>>n;
	
	d=n%7;
	k=n/7;
	if (k%2==1) cout<<d<<" "<<7-d;
	else cout<<7-d<<" "<<d;
	
}
    
