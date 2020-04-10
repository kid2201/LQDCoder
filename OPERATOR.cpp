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
ll T,N,S,Sum;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>T;
	FOR(i,1,T){
		cin>>N>>S;
		Sum = 0;
		while (N>0){
			if (Sum > S) Sum -= N;
			else Sum += N;
			N--; 
		}
		if (S==Sum) cout<<1;
		else cout<<0;
		cout<<endl;
	}
	return 0;
}


