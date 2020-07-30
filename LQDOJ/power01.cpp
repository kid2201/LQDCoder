#include<bits/stdc++.h>
#define X  first
#define Y  second

typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i++)
#define FOD(i,a,b) for(ll i = a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define cbit(a) __builtin_popcount(a)
#define uni(a) (a).resize(unique(all(a)) - (a).begin())

using namespace std;

typedef pair<ll,ll>ii;
typedef priority_queue<ll,vector<ll>,greater<ll> > heap_min;
const ll maxN = 1e6+5;
const ll inf = 1e10;
const ll mod = 1e9+7;

ll n,m,x;

ll mu(ll x, ll n) {
	if (n == 0) return 1;
	ll t = mu(x, n/2);
	t = t*t%m;
	if (n%2 == 1) t = t*x%m;
	return t%m;
}

ll f(ll n) {
	if (n == 0) return 1%m;
	
	if (n%2 == 0) {
		return (f(n-1)+mu(x,n))%m;
	} else {
		ll t = f(n/2);
		return (t+mu(x,n/2+1)*t)%m;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin>>x>>n>>m;
	cout<<f(n);
}
