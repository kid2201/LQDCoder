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
ll sum, k,n;

bool kt(ll x){
	if (x==1) return 0;
	ll p = sqrt(x);
	FOR(i,2,p)
	if (x%i==0) return 0;
	return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	k = sqrt(n);
	FOR(i,1,k)
	if (n % i == 0){
		if (kt(i)==1) sum +=i;
		if (i != n/i)
		if (kt(n/i)==1) sum +=n/i;
	}
	cout<<sum;
	return 0;
}


