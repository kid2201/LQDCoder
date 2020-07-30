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
    
	cin>>s;
	cin>>k;
	int k1 = s.size()-k;
	int b = s.size()-k1, a = 0;	
	FOR(i,1,k1){
		char Smin = '0';
		int vt;
		FOR(j,a,b)
		if (s[j] > Smin) {
			Smin = s[j];
			vt = j;
		}
		cout<<Smin;
		a = vt+1;
		b++;
		}
	return 0;
}


