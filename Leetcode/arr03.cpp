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
vector<int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	a.pb(8);
	a.pb(4);
	a.pb(5);
	a.pb(0);
	a.pb(0);
	a.pb(0);
	a.pb(7);
	int n = a.size();
	FOR(i,0,n-1)
	if (a[i]==0){
		FOD(j,n-1,i+1) a[j] = a[j-1];
		a[i+1] = 0;
		i++;
		
	//	cout<<endl;
	}
	FOR(i,0,n-1) cout<<a[i]<<" ";
	return 0;
}
// 5 3 0 0 1 0
// 5 3 
// 5 3 0 1 0 9
// 5 3 0 j -> j+1


