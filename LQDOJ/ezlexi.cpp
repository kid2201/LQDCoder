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
string s;
ll vt,k;
void subtask1(){
	string Res = "",tmp;
	FOR(i,0,k-1){
		tmp = s;
		tmp.erase(i,1);
		// ababa
		// abba
	}
	//...
}
void subtask2(){
	vt = k-1;
	FOR(i,0,k-1)
	if (s[i] > s[i+1]) 
	{
		vt = i;
		break;
	}	
	s.erase(vt,1);
	cout<<s;}
int main()
{
    ios_base::sync_with_stdio(0);
    freopen("CHIADAY.INP","r", stdin);
    freopen("CHIADAY.OUT","w", stdout);
	cin>>k;
	cin>>s;
	subtask2();
	return 0;
}


