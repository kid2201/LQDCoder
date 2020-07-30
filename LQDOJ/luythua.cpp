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
ll x,y,z,n,luythua,somu;
ll T[100005], sl, m;

void subtask1(){
	n = x*y*z;
	FOR(i,2,n){
		if (n%i==0){
			luythua = i;
			somu = 1;
			
			while (luythua < n){
				luythua = luythua * i;
				somu++;
			}
			if (luythua == n){
				cout<<somu;
				return;
			}
		}  
	}
}

void ngto(ll m){
	ll k = sqrt(m);
	
	FOR(i,2,k){
		while (m%i==0){
			sl++;
			T[sl] = i;
			m = m / i;
		}
	}
	if (m > 1) {
		sl++;
		T[sl] = m;
	}
}

void subtask2(){
	ngto(x);
	ngto(y);
	ngto(z);
	sort(T+1,T+1+sl);
	ll res=0, cnt=1;
	//FOR(i,1,sl) cout<<T[i]<<" ";
	FOR(i,1,sl-1){
		if (T[i]==T[i+1]) cnt++;
		else{
			res = __gcd(res,cnt);
			cnt = 1;
		}
	}
	res = __gcd(res,cnt);
	cout<<res; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>x>>y>>z;
	//subtask1();
	subtask2();
	return 0;
}


