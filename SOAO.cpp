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


int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	ll L,N,W,H;
	cin>>L;
	cin>>N;
	FOR(i,1,N) {
		cin>>W>>H;
		if (W < L || H < L) cout<<"UPLOAD ANOTHER";
		else
			if (W==H) cout<<"ACCEPTED";
				else cout <<"CROP IT";
		cout<<endl;
	}
	return 0;
}

