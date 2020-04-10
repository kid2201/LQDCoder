#include<bits/stdc++.h>

#define X  first
#define Y  second
typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i+=2)
#define FOD(i,a,b) for(ll i = a;i>=b;i-=2)
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

ll m,k,res=1e18;
int check(ll x) {
	if (x>=m/x-1) return 1;
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>m;
	k = sqrt(m);
	FOR(i,1,k)
	if (m%i==0) {
		if (check(i)==1) res = min(res,i); 
		//cout<<i<<" "<<m/i<<" "<<res<<endl;
		if (check(m/i)==1) res = min(res,m/i);
		//cout<<i<<" "<<m/i<<" "<<res<<endl;
	}
	cout<<res;
	return 0;
}


