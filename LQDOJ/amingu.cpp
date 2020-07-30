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
ll q,l,r,t,k,somu;

ll mu (ll n){
	ll s = 1;
	FOR(j,1,n) s = s * 10;
	return s;
}

ll scs (ll n){
	return n/somu-n/(somu*10);
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>q;
	FOR(i,1,q){
		cin>>l>>r>>t>>k;
		if (k%t!=0) {
			cout<<0;
		}
		else
		{
			k = k / t;
			if (k > 17 ) cout<<0;
			else
			{
				somu = mu(k);
				if ((l==r) && (r % somu == 0) && (r % somu*10 != 0)) cout<<1;
				else cout<<(scs(r) - scs(l-1));
			}
		}
		cout<<endl;
	}	
	return 0;
}


