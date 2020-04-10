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
ll n,c;
struct BT {
	ll TDo;
	ll DTang;
};

BT a[100005];
ll res = 0;
bool cmp(BT x, BT y) {
	return x.TDo < y.TDo;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n>>c;
	FOR(i,1,n) cin>>a[i].TDo>>a[i].DTang;
	sort(a+1, a+1+n,cmp);
	//FOR(i,1,n) cout<<a[i].TDo<<" "<<a[i].DTang<<endl;
	FOR(i,1,n)
	if (c>=a[i].TDo) {
		res++;
		c +=a[i].DTang;
		}
	cout<<res;
	return 0;
}


