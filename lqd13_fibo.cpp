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
ll n;

bool checkPar(ll x){
	int k = sqrt(x);
	FOR(i,2,k)
	if (x % i == 0) return 0;
	return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	ll a = 1;
	ll b = 1;
	ll c = a + b;
	cin>>n;
	while (c <= n) {
		if (checkPar(c) == 1) cout<<c<<" ";
		a= b;
		b = c;
		c = a + b;
	}	
	return 0;
}


