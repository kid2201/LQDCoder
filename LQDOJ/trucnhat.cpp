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
int a[5000005];
int res,n,x;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	FOR(i,1,5000000)
	for (int j=i;j<=5000000; j+=i) a[j]+=i;
	FOR(i,1,n){
		cin>>x;
		if (a[x] < 2*x) res++;
	}
	cout<<res;
	return 0;
}


