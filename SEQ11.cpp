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
ll a[100005],N,K,s[100005],Res;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>N>>K;
	FOR(i,1,N) cin>>a[i];
	s[1] = a[1];
	FOR(i,2,N) s[i] = s[i-1] + a[i];
	FOR(i,1,N) cout<<s[i]<<" ";
//	FOR(i,1,N-1) {
//		FOR(j,i+1,N)
//			if ((a[j]-a[i-1])%K==0) 
//				if (j-i+1 > Res) Res = j-i, cout<<i<<" "<<j<<" "<<Res<<endl;
//	}
//	cout<<Res;
	return 0;
}

