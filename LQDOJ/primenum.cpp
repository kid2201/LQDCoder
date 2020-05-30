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


ll a,b;
int p[10000005];
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>a>>b;
	p[1] = 1;
	ll k = sqrt(b);
	FOR(i,2,k){
		if (!p[i])
		for (ll j = i*i; j <= b; j+=i) p[j] = 1;
	}
	FOR(i,a,b)
	if (!p[i]) cout <<i<<endl;
	return 0;
}


