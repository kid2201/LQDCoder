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
string s,tmp="";
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>s;
	ll si = s.size()-1;
	FOR(i,0,si)
	if (s[i]>='0'&&s[i]<='9') {
		tmp = tmp + s[i];
	}
	//sort(tmp.begin(),tmp.end());
	ll sii = tmp.size()-1;
	FOR(i,0,sii){
		FOR(j,i+1,sii)
		if (tmp[i]>tmp[j]){
			char z = tmp[i];
			tmp[i] = tmp[j];
			tmp[j] = z;
		}
	}
	ll j = 0;
	FOR(i,0,si)
	if (s[i]>='0'&&s[i]<='9'){
		cout<<tmp[j];
		j++;
	}
	else
	cout<<s[i];
	return 0;
}


