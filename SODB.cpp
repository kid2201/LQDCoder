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
ll N;

ll sumNbr(ll X){
	ll tmp = 0;
	while (X!=0){
		tmp += X%10;
		X /= 10;
	}
	return tmp;
}
int ptNg(ll X){
	ll sumNt = 0, cnt = 0;
	if (X <= 3) return 0; 
	ll k = sqrt(X);	
	FOR(i,2,k)
	{
		while (X % i == 0){
			X = X / i;
			sumNt += sumNbr(i);
			cnt++;
		}
	}
	if (X != 1) {
		sumNt += sumNbr(X);
		cnt++;
	}
	if (cnt == 1) return 0;
	return sumNt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>N;
	while (1){
		N++;
		ll sum1 = sumNbr(N);
		ll sum2 = ptNg(N);
		//cout<<N<<" "<<sum1<<" "<<sum2<<endl;
		if (sum1 == sum2) {
			cout<<N;
			return 0;
		}
	}
	
	return 0;
}


