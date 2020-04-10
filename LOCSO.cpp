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
string s,res,tmp;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	long long i;
	getline(cin,s);
	res ="";
	tmp = "";
	s=s+'k';
	FOR(i,0,s.size()) {
		if (s[i]>='0' && s[i]<='9') {
			tmp = tmp + s[i];
		}
		else
		{
			while (tmp[0]=='0') tmp.erase(0,1);
			if (tmp.size() > res.size()) res = tmp;
			else
				if (tmp.size()==res.size() && tmp > res ) res = tmp;
			tmp="";
		}
	}
	cout<<res;
	return 0;
}

