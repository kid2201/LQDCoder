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
ll n;
ll a[5005];

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	FOR(i,1,n) cin>>a[i];
	double total = n*(n-1)*(n-2)/6,x;
	FOR(j,1,n-1){
		double dem1,dem2;
		dem2 = 0; dem1 = 0;
		FOR(i,1,j-1) 
		if (a[i]>a[j])dem1++;
		FOR(k,j+1,n) 
		if (a[k]>a[j])dem2++;
		x+=dem1*dem2;
	}	
	
	double res = x/total;
	cout<<fixed<<setprecision(6)<<res;
	return 0;
}


