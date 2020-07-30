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
ll a[100005],x,k,n,res;
map<ll,ll> D;

void subtask1(){
	FOR(i,1,n-1)
	FOR(j,i+1,n){
		if (a[i]+a[j]==x) res++;
	}	
	cout<<res;
}

void subtask2(){
	FOR(j,1,n){
		ll tmp = x - a[j];
		res += D[tmp];
		D[a[j]]++;
	}
	cout<<res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n>>x;
	FOR(i,1,n) cin>>a[i];	
	if (n<=1e3) subtask1();
	else subtask2();
	return 0;
}


