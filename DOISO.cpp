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
int a[100005],res=0;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>s;
	int si = s.size();
	FOR(i,0,si-1){
		a[i] = s[i] - '0';
		res += a[i];
	}
	sort(a,a+si,greater<int>());
	if (res % 3 == 0 && a[si-1]==0)
		FOR(i,0,si-1) cout<<a[i];	
	else cout<<-1;
	return 0;
}


