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
ll n,sum,Max,k = - 1e9;
ll a[100005],s[100005];

void subtask1(){
	FOR(i,1,n){
		sum = 0;
		FOR(j,i,n)
		{
			sum+=a[j];
			if (j-i+1==k && sum > Max) Max = sum;
			if (j-i+1 > k) break;
		}
	}
	cout<<Max;
}

void subtask2(){
	FOR(i,1,n) s[i] = s[i-1] + a[i];
	FOR(i,k,n) Max = max(Max,s[i]-s[i-k]);
	cout<<Max;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n;
	cin>>k;
	FOR(i,1,n) cin>>a[i];
	subtask2();
	return 0;
}


