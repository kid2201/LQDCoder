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
int t;
ll n,k,i;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>t;
	FOR(j,1,t){
		cin>>n>>k;
		ll m = sqrt(n);
		ll res = 1e9;
		FOR(i,1,m)
		if (n % i == 0) {
			ll tmp = n / i;
			if (tmp <= k) res = min(i, res);
			tmp = n / (n/i);
			if (tmp <= k) res = min(n/i, res);
			
		}
		cout<<res<<endl;
	}	
	return 0;
}


