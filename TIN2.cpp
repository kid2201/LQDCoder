#include <bits/stdc++.h>
using namespace std;
long long A,B,C,x,y,res;

int main(){
	cin>>A>>B>>C;
	// ax + by = c;
	long long tmp = C/A;
	for (x=1; x<=tmp; x++){
		y = (C - A * x ) / B;
		if ((C - A * x ) % B == 0) res = max (x+y,res);
	}
	cout<<res;
}
