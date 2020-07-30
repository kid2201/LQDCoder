/*
G?i dp[i] l� t?ng s? chuy?n v?n t?i nh? nh?t d? ch? ��NG i t?n g?o.
=> K?t qu? b�i to�n l� dp[m].

V� d?:
i = 10
C�c xe nh?n ch?:
3 5 7 11

=> dp[i] = min(dp[i-3], dp[i-5], dp[i-7], dp[i-11]) + 1;

T?c l� d? ch? dc d�ng i t?n g?o, th� ph?i ch? dc d�ng i-3 t?n g?o, sau c� ch? th�m bao g?o 3 t?n.
v?y dp[i] = dp[i-3] + 1.
Tuong t? v?i c�c s? 5, 7, 11. R� r�ng ch�ng ta s? l?y min.
*/

#include<bits/stdc++.h>
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

ll n, m;
ll a[20], b[20];
ll dp[maxN], trace[maxN];

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin >> m >> n;
	FOR(i, 1, n) cin >> a[i];
	
	// M?c d?nh m?i xe d?u ph?i nh?n ch? 1 l?n, n�n tr? s?n.
	FOR(i, 1, n) {
		m -= a[i];
		b[i]++;
	}
	
	// N?u m < 0, th� t?c l� ko d? t?n g?o d? c�c xe �t nh?t nh?n ch? 1 l?n.
	if (m < 0) {
		cout << 0;
		return 0;
	}
	
	dp[0] = 0;
	// N?u ko c� t?ng s? chuy?n ch? d�ng i t?n g?o, th� m?c d?nh l� 1e18
	FOR(i, 1, m) dp[i] = 1e18;
	FOR(i, 1, m) {
		FOR(j, 1, n) {
			if (i - a[j] >= 0 && dp[i] > dp[i - a[j]] + 1) {
				dp[i] = dp[i - a[j]] + 1;
				// ��nh d?u v? tr� xe t?i dc ch?n
				trace[i] = j;
			}
		}
	}
	
	if (dp[m] != 1e18) {
		// Truy x�t c�c xe dc ch?n d? dc m
		cout << dp[m] + n << endl;
		while (m > 0) {
			b[trace[m]]++;
			m = m - a[trace[m]];
		}
		FOR(i,1,n) cout << b[i] << " ";
	}
	else cout << 0;
	return 0;
}





