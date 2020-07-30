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
ll N,X1,XN;
ll Cal(ll x){
	ll sum = 0;
	ll mul = 1;
	while (x>0){
		int sc = x % 10;
		if (sc != 0) mul *= sc;
		sum+=sc;
		x/=10;
	}
	return mul+sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>X1>>N;
	FOR(i,2,N) {
		XN = Cal(X1);
		X1 = XN;
	}
	cout<<XN;
	return 0;
}


