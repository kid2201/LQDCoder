#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,a,b) for(ll i=a;i>=b;i--)
const ll mod = 1e9+7;
const ll maxN = 1e6+5;
const ll N = 1e6;
ll a[200005],s[200005],n,res = -1e9;

int main() {
	ios_base::sync_with_stdio(0);
	cin>>n;
	FOR(i,1,n) cin>>a[i];
	s[1] = a[1];
	FOR(i,2,n) s[i] = max(s[i-1] + a[i],a[i]);
	FOR(i,1,n) res = max (res,s[i]);
	cout<<res;
	return 0;
}
