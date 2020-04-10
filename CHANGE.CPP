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

int a[6] = {500,100,50,10,5,1};
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	ll T, N,Res;
	//cin>>T;
	//FOR(i,1,T) {
		cin>>N;
		Res = 0;
		N = 1000 - N;
		FOR(j,0,5) {
			Res = Res + N/a[j];
			N = N - (N/a[j])*a[j];
		}
		cout<<Res;//<<endl;
	//}
	return 0;
}

