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
ll cnt, res,a[maxN],P,n;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>P;
	getline(cin,s);
	FOR(t,1,P){
		getline(cin,s);
		s = s + " ";
		ll si = s.size()-1;
		
		FOR(i,1,n) a[i] = 0;
		n = 0;
		res = 0;
		ll i = 0;
		cnt = 0;
		
		while (i <= si){
			if (s[i]!=' ') cnt++;
			else {
				//i++;
				while (s[i]==' ') i++;
				n++;
				a[n] = cnt;
				cnt = 1;
			}
			i++;
		}
		cnt = 1;
		FOR(i,1,n-1)
		if (a[i]==a[i+1]) cnt++;
		else {
			res = max(res,cnt);
			cnt=1;
		} 
		res = max(res,cnt);
		//FOR(i,1,n) cout<<a[i]<<" ";
		//cout<<"Res:"<<res<<endl;
		cout<<res<<endl;
		
	}
	return 0;
}


