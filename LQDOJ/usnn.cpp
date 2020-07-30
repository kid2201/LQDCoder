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
ll a[100005], res,n;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	FOR(i,1,n) cin>>a[i];
	res=a[1];
	FOR(i,2,n) res=__gcd(res,a[i]);
	if (res==1) {
		cout<<-1;
		return 0;
	}
	FOR(i,2,res)
	if (res%i==0) {
		cout<<i;
		return 0;
	}
	cout<<res;
	return 0;
}


