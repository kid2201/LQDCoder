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
ll a,b,d,res,tmp;

ll sum(ll x){
	ll s = 0;
	while (x!=0){
		s += x%10;
		x/=10;
	}
	return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>a>>b;
	ll k = sqrt(a);
	FOR(i,1,k)
	if (a%i==0){
		if (b%i==0) {
			tmp =  sum(i);
			res = max(res,tmp);
		}
		if (b%(a/i)==0){
			tmp = sum(a/i);
			res = max(res,tmp);
		}
	}
	cout<<res;
	return 0;
}


