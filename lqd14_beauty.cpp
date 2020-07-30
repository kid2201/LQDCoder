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
ll n, i; 

ll tong(ll x){
	ll sum = 0;
	while (x > 0){
		sum += (x%10) * (x%10);
		x /= 10;
	}
	return sum;
}

bool ngto(ll x){
	if (x<2) return 0;
	ll k = sqrt(x);
	FOR(i,2,k)
	if (x%i==0) return 0;
	return 1;
}
bool kt(ll x){
	ll m = tong(x);
	if (ngto(m)==1) return 1;
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	i = 1;
	cin>>n;
	while (n>0){
		i++;
		if (kt(i)==1) {
			//cout<<i<<" ";
			n--;
		}
	}	
	cout<<i;
	return 0;
}


