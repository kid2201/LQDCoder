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

int Ngto(long long x){
	long long k = sqrt(x),i;
	if (x < 2) return 0;
	for (i=2; i<=k; i++)
	if (x%i==0) return 0;
	return 1;
	}
	
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	long long n;
	cin>>n;
	while (n>0) {
		if (Ngto(n)==0) {
			cout<<"KHONG";
			return 0;
		}
		n = n / 10;
	}
	cout<<"PHAI";
	return 0;
}


