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
string s1,s2;
ll cnt1[1000],cnt2[1000],res;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>s1;
	cin>>s2;
	int si1 = s1.size()-1;
	int si2 = s2.size()-1;
	FOR(i,0,si1) cnt1[s1[i]]++;
	FOR(i,0,si2) cnt2[s2[i]]++;
	FOR(i,'a','z') 
	if (cnt1[i]==0 || cnt2[i]==0)
	res += abs(cnt1[i] - cnt2[i]);
	cout<<res;
	return 0;
}


