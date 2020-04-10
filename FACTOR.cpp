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
ll N,cnt=0;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>N;
	ll k = sqrt(N);
	FOR(i,1,k)
	if (N % i == 0) cnt+=2;
	if (k*k==N) cnt--;
		
	FOR(i,2,k)
	{
		while (N % i == 0){
			N = N / i;
			if (N!=1) cout<<i<<'*';
			else cout<<i;
		}
	}
	if (N!=1) cout<<N;
	cout<<endl<<cnt;
	return 0;
}


