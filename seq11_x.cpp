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
ll s[100005],pos[100005],n,i,Res = 0,k,x;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n>>k;
	FOR(i,1,n) {
		cin >> x;
		s[i] = (s[i-1] + x) % k;
	}
	FOR(i,1,100001) pos[i] = -1;
//	FOR(i,1,n) cout<<s[i]<<" ";
//	cout<<endl;
	FOR(i,1,n)
	{
	if (pos[s[i]] == -1) pos[s[i]] = i;
	else Res = max(Res, i - pos[s[i]]);
//	cout<<s[i]<<" "<<pos[s[i]]<<" "<<Res<<endl;
}
//	FOR(i,1,n) cout<<s[i]<<" "<<pos[s[i]]<<" "<<Res<<endl;
	cout<<Res;
	return 0;
}


