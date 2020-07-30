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

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>s;
	gio = (s[0]-48)*10 + s[1];
	phut = 	(s[3]-48)*10 + s[4];
	tmp = phut%10 * 10 + phut / 10;
	a = gio / 10;
	b = gio % 10;
	if (gio < phut) {
		if (gio==23 && phut > 32) {
			cout<<"00:00";
			return 0;
		}
		else 
		if (phut > tmp){
			
		}
	}
	return 0;
}


