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
ll n, a[100005],cnt0,cnt1,Res=0;
map<ll,ll> b;
void subtask1(){
	FOR(i,1,n){
		cnt0 = cnt1 = 0;
		FOR(j,i,n) {
			if (a[j]==1) cnt1++;
			else cnt0++;
			if (cnt1==cnt0) Res = max(Res,cnt0+cnt1);
		}
	}
	cout<<Res;
}

void subtask2(){
	FOR(i,1,n){
		if (a[i]==1) cnt1++;
		else cnt0++;
		if (b[cnt0-cnt1]==0) b[cnt0-cnt1] = i;
		else Res = max(Res, i-b[cnt0-cnt1]);
	}
	cout<<Res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	FOR(i,1,n) cin>>a[i];
	//subtask1();
	subtask2();
	return 0;
}


