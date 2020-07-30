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
int D[100005], A[100005],x,n;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
    FOR(i,2,100000)
    if (D[i]==0)
    //FOR(j,i,1e5)
    for (int j=i; j<=1e5; j+=i)
    if (D[j]==0){
    	D[j]=1;
    	A[i]++;
	}
	cin>>n;
	FOR(i,1,n){
		cin>>x;
		if (x <= 1e5)
		cout<<A[x]<<endl;
		else cout<<0<<endl;
	}
	return 0;
}


