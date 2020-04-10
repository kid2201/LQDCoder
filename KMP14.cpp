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
ll a[100][100],n,sum=0,tmp=0;
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	
	FOR(i,1,n)
	FOR(j,1,n) cin>>a[i][j];
	
	FOR(i,1,n) sum+=a[i][i];
	
	//CHEO
	FOR(i,1,n) tmp+=a[i][n-i+1];
	if (tmp!=sum){
		cout<<"NO";
		return 0;
	}
	
	//DONG
	FOR(i,1,n){
		tmp = 0;
		FOR(j,1,n) tmp+=a[i][j];
		if (tmp!=sum){
			cout<<"NO";
			return 0;
		}
	}
	
	//COT
	FOR(i,1,n){
		tmp = 0;
		FOR(j,1,n) tmp += a[j][i];
			if (tmp!=sum){
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";
	return 0;
}


