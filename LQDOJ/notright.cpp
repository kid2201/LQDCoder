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
ll T,a[5];
void lyngu(){
	if (a[1]+a[2] > a[3] && a[2]+a[3] > a[1] && a[1]+a[3]>a[2] && a[1]*a[1]+a[2]*a[2]!=a[3]*a[3]) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>T;
	FOR(i,1,T){
		cin >>a[1]>>a[2]>>a[3];
		sort(a+1,a+4);
		lyngu();
	}
	return 0;
}
// 90000000000 410000000000 400000000000


