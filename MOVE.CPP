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
ll K,n;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
    while (1){
		cin>>K;
		if (K==0) return 0;
		cin>>s;
		n = s.size()-1;
		FOD(i,n,0) cout<<(char)((s[i]- 'A' + K ) % 26 + 65);	
		cout<<endl;
	}
	return 0;
}


