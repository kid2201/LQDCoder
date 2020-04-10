#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll>ii;
#define X first
#define Y second
#define pb push_back
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,a,b) for(ll i=a;i>=b;i--)
#define all(a) (a).begin(),(a).end()
#define uni(a) (a).resize(unique(all(a)) - (a).begin())
const ll mod = 1e9+7;
const ll maxN = 1e6+5;
const ll N = 1e6;

ll a,b;
ll A[20];

ll soChuSo(ll n) {
	if (n == 0) return 1;
	ll res = 0;
	while (n > 0) {
		res++;
		n/=10;
	}
	return res;
}

// Lay cnt chu so cua n tu ben trai
ll tachTrai(ll n, ll cnt) {
	ll scc = soChuSo(n);
	ll tmp = 1;
	FOR(i,1,scc-cnt) tmp*=10;
	return n/tmp;
}

// Lay cnt chu so cua n tu ben phai
ll tachPhai(ll n, ll cnt) {
	ll res = 0;
	FOR(i,1,cnt) {
		res = res*10 + n%10;
		n = n/10;
	}
	return res;
}

ll solve(ll n) {
	ll res = 0;
	ll scs = soChuSo(n);
	ll l,r;
	
	if (scs%2==0) {
		res = A[scs/2];
		l = tachTrai(n, scs/2);
		r = tachPhai(n, scs/2);
		res += l-1;
		if (l <= r) res++;
	} else {
		res = A[scs/2];
		l = tachTrai(n, (scs+1)/2);
		r = tachPhai(n, (scs+1)/2);
		res += l-1;
		if (l <= r) res++;
	}
	
	return res;
}

int main() {
	ios_base::sync_with_stdio(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	A[0] = 1;
	FOR(i,1,8) {
		A[i] = A[i-1]*10;
	}
	cin>>a>>b;
	cout<<solve(b) - solve(a-1);
	return 0;
}
    