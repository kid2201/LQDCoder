#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<ll,ll>ii;
#define X first
#define Y second
#define pb push_back
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FORD(i,a,b) for(ll i=a;i>=b;i--)
#define all(a) (a).begin(),(a).end()
#define uni(a) (a).resize(unique(all(a)) - (a).begin())
const ll mod = 1e9+7;
const ll maxN = 1e6+5;
const ll N = 1e6;

int D[maxN];

void sannt(ll n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) D[j]++;
	}
	
	for (int i = 1; i <= n; i++) {
		D[i] = D[i-1] + D[i];
	}
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	sannt(1e6);
	
	int T, l, r;
	cin >> T;
	while (T--) {
		cin >> l >> r;
		cout << D[r] - D[l-1] << endl;
	}
	return 0;
}

