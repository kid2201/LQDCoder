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
ll T,res,N,K,x;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>T;
	FOR(i,1,T){
		cin>>N>>K;
		res = 0;
		FOR(j,1,N)
		{
			cin>>x;
			if (x % K == 0) res = __gcd(res,x);
		}
		if (res==K) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
//cout<<__gcd(0,60);
	return 0;
}


