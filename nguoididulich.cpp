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

int c[100][100],dd[100],kq[100],a[100],cphi[100];
int n,m,res=10000;

void tim(int i){
	for (int j=2; j<=n; j++)
	if (dd[j]==0) {
		a[i] = j;
		cphi[i] = cphi[i-1] + c[a[i-1]][j];
		if (cphi[i] < res) {
			dd[j] = 1;
			if (i==n) {
				if (cphi[n] + c[a[n]][1] < res)
				{
					for (int k = 1; k<=n; k++) kq[k] = a[k];
					res = cphi[n] + c[a[n]][1];
				}
			}
			else tim(i+1);
			dd[j] = 0;
		}
		
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n>>m;
	FOR(i,1,n) 
	FOR(j,1,n){
		c[i][j] = 100000;
		c[j][i] = 100000;
		c[i][i] = 0;
	}
	FOR(k,1,m)
	{
		int i,j,cost;
		cin>>i>>j>>cost;
		c[i][j] = cost;
		c[j][i] = cost;
	}
	/*
	FOR(k,1,n) {
		FOR(p,1,n) cout<<c[k][p]<<" ";
		cout<<endl;
	}*/
	dd[1] = 1;
	a[1] = 1;
	tim(2);
	for (int i=1; i<=n; i++) cout<<kq[i]<<" ";
	cout<<1;
	cout<<endl<<"Chi phi: "<<res;
	return 0;
}


