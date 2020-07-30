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
string s,a[2000];
int main()
{
    ios_base::sync_with_stdio(0);
//    freopen("LUYTHUA.INP","r", stdin);
//    freopen("LUYTHUA.OUT","w", stdout);
 	getline(cin,s);
	
	// Xoa dau cach
	while(s[0]==' ') s.erase(0,1);
	while(s[s.size()-1]==' ') s.erase(s.size()-1,1);
	ll vt = s.find("  ");
	while (vt > 0) {
		s.erase(vt,1);
		vt = s.find("  ");
	}
	
	
	// Tach tung tu	
	ll n = 0;
	vt = s.find(" ");
	
	while (vt>0){
		n++;
		string tmp = s.substr(0,vt);
		s.erase(0,vt+1);
		a[n] = tmp;
		vt = s.find(" ");
	}
	n++;
	a[n] = s;
	
	// Nhap va xuat thep yeu cau
	FOR(i,1,n){
		cin>>vt;
		cout<<a[vt]<<" ";
	}
	return 0;
}
