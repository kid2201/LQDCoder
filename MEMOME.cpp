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
ll dem[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	ll n,i,q,j,k;
	cin>>n;
  	for (i=1;i<=n;i++){
    cin>>k;
  	dem[k]++;
  	}
   	cin>>q;
    for (i=1;i<=q;i++)
    {
        cin>>k;
      	if (dem[k]>0)
        cout<<dem[k]<<endl;
        else
            cout<<"NOT PRESENT"<<endl;
     }
	return 0;
}

