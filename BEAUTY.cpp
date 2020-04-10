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
ll N,i,Res;

int PrimeN(ll X) {
	if (X < 2) return 0;
	ll N = sqrt(X);
	FOR(i,2,N)
	if (X%i==0) return 0;
	return 1;
}

int OK(ll X) {
	int socuoi;
	ll S=0;
	while (X > 0){
		socuoi = X % 10;
		S = S + socuoi*socuoi;
		X = X / 10;
	}
	if (PrimeN(S)) return 1;
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
    cin>>N;
	i = 2;
	while (N>=1) {
		if (OK(i)) N--, Res = i;
		i++;
	}
	cout<<Res;
	return 0;
}

