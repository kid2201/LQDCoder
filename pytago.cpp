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
string s,a,b,c;
ll res, soa, sob, soc;


ll toInt(string t)
{
	long long res = 0;
	for (int i=0; i<=t.size()-1; i++) 
		res = res * 10 + (t[i]-48);
	return res;
}

int main()
{	
	cin >> s;
	int si = s.size();
	
	FOR(i,0 ,si-3){
		FOR(j,i+1,si-2){

			a = s.substr(0, i+1);
			b = s.substr(i+1, j-i);
			c = s.substr(j+1, si-j-1);
			
			//cout << a << " " << b << " " << c << endl; 
				
			soa = toInt(a);
			sob = toInt(b);
			soc = toInt(c);
			
			
			if (soa*soa == sob*sob + soc*soc || sob*sob == soa*soa + soc*soc || soc*soc == soa*soa + sob*sob)
			{
				ll tmp = max(soa, max(sob,soc));
				res = max(res, tmp);
			}
		}
	}
	
	cout << res;
}


