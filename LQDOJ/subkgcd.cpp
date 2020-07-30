#include<bits/stdc++.h>
#define X  first
#define Y  second

typedef long long ll;

#define FOR(i,a,b) for(int i = a;i<=b;i++)
#define FOD(i,a,b) for(int i = a;i>=b;i--)
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
int a[300005];
int n,k;
int minD = 1e6;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>k;
	FOR(i,1,n) {
		cin>>a[i];
		if (a[i] > k)
		minD = min(a[i],minD);
	}
	FOD(i,minD,1){
		bool ok = 1;
		FOR(j,1,n)
		if (a[j]%i > k){
			ok = 0;
			break;
		}
		if (ok) {
			cout<<i;
			break;
		}
	}	
	return 0;
}


