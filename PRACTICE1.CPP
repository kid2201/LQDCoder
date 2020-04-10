#include <bits/stdc++.h>
using namespace std;
struct BT{
	long long trinhdo,dotang;
};

BT a[100005];
long long n,c,i;
bool cmp(BT truoc,BT sau){
	return (truoc.trinhdo < sau.trinhdo || truoc.trinhdo==sau.trinhdo && truoc.dotang>sau.dotang);	
}

int main()
{
	cin>>n>>c;
	for(i=1; i<=n; i++) cin>>a[i].trinhdo>>a[i].dotang;
	sort(a+1, a+1+n,cmp);
	
}
