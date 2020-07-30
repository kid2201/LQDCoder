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
ll x,n,k,sum=0,Min=1e9;
ll b[200005];

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n>>k;
	FOR(i,1,k){
		cin>>x;
		Min = min(x,Min);
		sum+=x;
		//cout<<x<<" "<<sum<<endl;
		b[x]=1;
	}	
	sum-=Min;
	//cout<<sum;
	FOD(i,n,1)
	if (b[i]==0) {
		sum+=i;
		break;
	}
	cout<<sum;
	return 0;
}


