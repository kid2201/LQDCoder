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
ll K,i,Res;
int PrimeN(ll X) {
	ll N = sqrt(X);
	FOR(i,2,N)
	if (X%i==0) return 0;
	return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>K;
	ll N = sqrt(K);
	FOR(i,2,N)
	if (K % i == 0) 
	{
		if (PrimeN(i)==0) Res +=i;
		if (PrimeN(K/i)==0) Res +=N/i;
	}
	if (PrimeN(K)) Res +=K;
	cout<<Res;
	return 0;
}

