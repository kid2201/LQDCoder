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
int a[10]={10,100,100,1000,1000,5000,5000,10000,100000,1000000};
long long n,m;
long long b[maxN];
void createTest(int i){
	char input[15]="D:\\ANTS\\1.inp";
	input[8]=i+48;
	ofstream cout;
   	cout.open(input);
	srand(time(0));
	n=(rand()*rand()-rand()+(rand()%a[i])*rand())%a[i];
    m=5*(n+rand()%a[i]);
	cout<<n<<" "<<m<<endl;
	for(int j=1;j<=n;j++) {
		int r=rand()%2;
		int x=rand()%(m/5);
		if (r) cout<<x;
		else cout<<-x;
		b[j]=x;
		cout<<" ";
	}
	cout.close();
}
void Cal(int i){
	char output[15]="D:\\ANTS\\1.out";
	output[8]=i+48;
	ofstream cout;
	cout.open(output);
	long long res=0;
	FOR(j,1,n) 
		if (b[j]<0) res=max(res,-b[j]);
		else res=max(res,m/5-b[j]);
	cout<<res;
	cout.close();
}
int main()
{
    ios_base::sync_with_stdio(0);
    
   FOR(i,0,9){
		createTest(i);
		Cal(i);
	}
	
	return 0;
}


