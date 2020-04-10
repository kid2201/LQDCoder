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
ll a[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("HOUSING_41.in","r", stdin);
    ll n,k,dem=0;
	cin>>n>>k;
	FOR(i,1,n) cin>>a[i];
	FOR(i,1,n-1)
	if (a[i]!=a[i+1]) dem++;
	if (dem<k && k<=n) {
		cout<< "YES";
		return 0;	
	}
	//cout<<dem;
	cout << "NO";
	return 0;
}

