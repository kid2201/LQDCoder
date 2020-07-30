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
ll res, x;
int check(ll n){
	ll tmp = sqrt(n);
    if (tmp*tmp == n) return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>x;
	ll k = sqrt(x);
	FOR(i,1,k)
	if (x%i==0){
		if (check(i)==1) res = max(res,i);
		if (check(x/i)==1) res = max(res,x/i);
	}
	//res = sqrt
	cout<<(ll)sqrt(res);
	return 0;
}


