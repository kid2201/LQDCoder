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
ll n,k,res,sum;
ll a[100005], T[100005];
map<ll,ll> d;

void subtask1(){
	FOR(i,1,n)
		FOR(j,i,n)
		{
			sum = 0;
			FOR(z,i,j) sum+=a[z];
			if (sum==k) res++;
		}
	cout<<res;
}

void subtask2(){
	FOR(i,1,n) T[i] = T[i-1] + a[i];
	d[0] = 1;
	FOR(i,1,n){
		res += d[T[i] - k];
		d[T[i]]++;
	}
	cout<<res;
}

void subtask1_inv(){
		FOR(i,1,n)
		{
			sum=0;
			FOR(j,i,n) {
				sum+=a[j];
				if (sum==k) {
					res++;
					FOR(x,i,j) cout<<a[x]<<" ";
					cout<<endl;
				}
			}
		}
		
		cout<<res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n>>k;
	FOR(i,1,n) cin>>a[i];
	if (n<=100) subtask1_inv();
	else subtask2();
	return 0;
}


