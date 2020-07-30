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
char a[100][100];

int n,m,res;

void way1(){
	FOR(i,1,n)
	FOR(j,1,m)
	if ((a[i][j]=='f'||a[i][j+1]=='f'||a[i+1][j]=='f'||a[i+1][j+1]=='f')
	&& (a[i][j]=='a'||a[i][j+1]=='a'||a[i+1][j]=='a'||a[i+1][j+1]=='a')
	&& (a[i][j]=='c'||a[i][j+1]=='c'||a[i+1][j]=='c'||a[i+1][j+1]=='c')
	&& (a[i][j]=='e'||a[i][j+1]=='e'||a[i+1][j]=='e'||a[i+1][j+1]=='e')) res++;
	
}

void way2(){
	string tmp="";
	FOR(i,1,n)
	FOR(j,1,m){
		//tmp = a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
		tmp="";
		tmp.push_back(a[i][j]);
		tmp.push_back(a[i][j+1]);
		tmp.push_back(a[i+1][j]);
		tmp.push_back(a[i+1][j+1]);
		//cout<<tmp;
		//cout<<"Ly"<<a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
		sort(tmp.begin(),tmp.end());
		if (tmp=="acef") res++;
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r", stdin);
	cin>>n>>m;
	FOR(i,1,n)
	FOR(j,1,m) cin>>a[i][j];
	//way1();
	way2();
	cout<<res;
	return 0;
}


