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


int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
    ll T, N, tmp;
	cin>> T;
	FOR(i,1,T) {
		cin>>N;
		tmp = N % 12;
		if (tmp==1) cout<<N+11<<" WS";
		if (tmp==2) cout<<N+9<<" MS";
		if (tmp==3) cout<<N+7<<" AS";
		if (tmp==4) cout<<N+5<<" AS";
		if (tmp==5) cout<<N+3<<" MS";
		if (tmp==6) cout<<N+1<<" WS";
		if (tmp==7) cout<<N-1<<" WS";
		if (tmp==8) cout<<N-3<<" MS";
		if (tmp==9) cout<<N-5<<" AS";
		if (tmp==10) cout<<N-7<<" AS";
		if (tmp==11) cout<<N-9<<" MS";
		if (tmp==0) cout<<N-11<<" WS";
		cout<<endl;
	}
	return 0;
}

