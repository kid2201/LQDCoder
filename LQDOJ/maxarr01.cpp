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
ll a[100005], f[100005],T,N;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	a[0]=0;
	a[1]=1;
	f[1]=1;
	FOR(i,1,100000/2){
        a[i*2]=a[i];
        a[i*2+1]=a[i]+a[i+1];
    }
    FOR(i,2,100000) f[i]=max(a[i],f[i-1]);
    cin>>T;
    FOR(i,1,T){
    	cin>>N;
    	cout<<f[N]<<endl;
	}
	return 0;
}


