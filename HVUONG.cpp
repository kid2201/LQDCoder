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
ii a[1000000];

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	FOR(i,1,4) cin>>a[i].first>>a[i].second;
	sort(a+1,a+1+4);
	//FOR(i,1,4) cout<<a[i].first<<" "<<a[i].second<<endl;
	if(a[1].first==a[2].first&&a[3].first==a[4].first&&a[1].second==a[3].second&&a[2].second==a[4].second)
        cout<<abs(a[1].first-a[3].first)*abs(a[1].first-a[3].first);
    else cout<<"-1";
	return 0;
}

