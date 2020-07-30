#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long a, b,c, Max;
	cin>>a>>b>>c;
	
	Max = a;
	if (Max < b) Max = b;
	if (Max < c) Max = c;
	cout<<Max;
}
