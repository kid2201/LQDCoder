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
ll a[100005], tong, res,n,dem,B[1000000];
map<ll,ll> D;

void subtask1(){
	FOR(i,1,n)
	{
		tong = 0;
		FOR(j,i,n)
		{
			tong += a[j];
			if (tong == 0) res++;
		}
	}
	cout<<res;
}
//
void subtask2(){
	FOR(i,1,n) B[i] = B[i-1] + a[i];
	//sort(B.begin(),B.end());
	sort(B+1,B+1+n);
	dem = 1;
	//FOR(i,1,n) cout<<B[i]<<" ";
	FOR(i,2,n)
	if (B[i-1] == B[i]) dem++;
	else
		{
			//if (dem > 2)
			res = res + dem*(dem-1)/2;
			dem = 1;
		}
	res = res + dem*(dem-1)/2;
	cout<<res;
}
void subtask3(){
	D[0] = 1;
	FOR(i,1,n){
		tong +=a[i];
		res += D[tong];
		D[tong]++;
		
	}
	cout<<res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	FOR(i,1,n) cin>>a[i];
	//subtask1();
	//subtask2();
	subtask3();
	return 0;
}


