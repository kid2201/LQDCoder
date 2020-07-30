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
int T[maxN];
ll a,b,n,res;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
    ll k = sqrt(maxN-5);
    T[0] = 1; T[1] = 1;
	FOR(i,2,k)
		if (T[i]==0)
		for(ll j = i*i; j <= 1e6; j+=i) T[j] = 1;
	cin>>n;
	FOR(i,2,n/2){
		a = i;
		b = n - a;
		if (T[a]==0 && T[b]==0) res++;
	} 
	cout<<res;
	return 0;
}


