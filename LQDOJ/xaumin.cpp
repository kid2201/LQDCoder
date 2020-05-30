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
string s;
ll k;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
    cin>>k;
	cin>>s;
	ll si = s.size()-1;
	ll d = 0;
	FOR(i,1,k){
		ll Min = d;
		FOR(j,d+1,si-k+i)
		if (s[Min] > s[j]) Min = j;
		cout<<d<<" "<<si-k+i<<" "<<s[Min]<<endl;
		d = Min + 1;
		
	}
	return 0;
}


