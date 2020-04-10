#include<bits/stdc++.h>

#define X  first
#define Y  second
typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i+=2)
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
ll m,i,s,dem;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>m;
	ll f = 1;
	i = 1;
	while (i<m) {
		s +=i;
		dem++;
		if (s>m) {
			//cout<<f<<" "<<s<<endl;
			dem=0;
			f+=2;
			i = f;
			//cout<<f<<" "<<s<<endl;
			s = 0;
			continue;			
		}
		if (s==m) {
				//cout<<i<<" "<<dem<<" "<<f;
				cout<<i-(dem/2)*2;
				return 0;
			}
		i+=2;
	}
	return 0;
}


