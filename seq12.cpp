#include <bits/stdc++.h>
using namespace std;

long long a[100005];
int main(){
	long long N,V,i,s=0,l=1,r,res = 0;
	cin>>N>>V;
	for (i=1; i<=N; i++) cin>>a[i];
	for (r=1; r<=N; r++) {
		s = s + a[r];
		if (s >= V) {
			cout<<l<<" "<<r<<endl;
			res = res + N - r + 1;
			s = s - a[l];
			l++;
		}	
	}
	cout<<res;
}

 
