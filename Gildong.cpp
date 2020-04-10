#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll>ii;
#define X first
#define Y second
#define pb push_back
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,a,b) for(ll i=a;i>=b;i--)
#define all(a) (a).begin(),(a).end()
#define uni(a) (a).resize(unique(all(a)) - (a).begin())
const ll mod = 1e9+7;
const ll maxN = 1e6+5;
const ll N = 1e6;
 
ll n,m;
string a[105];
vector<ll> v1,v2;
ll kt[maxN];
 
bool check(string s) {
	ll si = s.size();
	FOR(i,0,si/2) {
		if (s[i] != s[s.size()-1-i]) return 0;
	}
	return 1;
}
 
string daoNguoc(string s) {
	string res = "";
	ll si = s.size();
	FOR(i,0,si-1) {
		res = s[i]+res;
	}
	return res;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin>>n>>m;
	FOR(i,1,n) cin>>a[i];
	FOR(i,1,n) {
		if (kt[i] == 1) continue;
		string t = daoNguoc(a[i]);
		FOR(j,i+1,n) {
			if (kt[j] == 0 && t == a[j]) {
				v1.pb(i);
				v2.pb(j);
				kt[i] = kt[j] = 1;
				break;
			}
		}
	}
	FOR(i,1,n)
		if (kt[i] == 0 && check(a[i])) {
			v1.pb(i);
			break;
		}
	
	ll si1 = v1.size();
	ll si2 = v2.size();
	ll res = m*(si1+si2);
	cout<<res<<endl;
	if (res == 0) return 0;
	FOR(i,0,si1-1) cout<<a[v1[i]];
	FOD(i,si2-1,0) cout<<a[v2[i]];
	return 0;
}