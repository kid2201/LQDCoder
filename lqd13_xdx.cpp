/*
G?i dp[i] l� k?t qu? b�i to�n ch? t�nh t? 1 d?n i (s? x�u palindrome dc c?t �t nh?t ch? t�nh t? k� t? th? 1 d?n k� t? th? i.
V?y suy ra dp[n] l� k?t qu? c?a b�i to�n.



V?i m?i i, dp[i] dc t�nh nhu sau:

Cho j t? 1 d?n i, ki?m tra xem string t? j d?n i c� ph?i l� 1 x�u palindrome hay ko?
N?u ph?i th� d� l� 1 c�ch c?t, v?y dp[i] = dp[j-1] + 1;

Gi? s? c� nhi?u c�ch c?t th� ta l?y min.
Suy ra: dp[i] = min(dp[i], dp[j-1] + 1). v?i j = 1 -> i

K?t h?p trace[i] l� v? tr� j-1 ph� h?p dc ch?n, d? truy v�t.
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

string s;
ll dp[maxN];
ll trace[maxN];

// kiem tra xdx tu l den r cua string s
bool xdx(ll l, ll r) {
	while (l <= r) {
		if (s[l] != s[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	
	cin >> s;
	
	// C�c k� t? c?a string s b?t d?u t? 1 v� k?t th�c t?i n
	s = " " + s;
	ll n = s.size() - 1;
	
	// V� t�m min n�n m?c d?nh l� 1e18
	FOR(i,1,n) dp[i] = 1e18;
	dp[0] = 0;
	
	FOR(i, 1, n) {
		FOR(j, 1, i) {
			if (xdx(j, i)) {
				if (dp[i] > dp[j-1] + 1) {
					trace[i] = j-1;
					dp[i] = dp[j-1] + 1;
				}
			}
		}
 	}
 	
 	cout << dp[n] << endl;
 	
	// Truy v�t d? l?y dc c�c string palindrome
 	vector<string> ans;
 	while (n > 0) {
 		string t = s.substr(trace[n] + 1, n - trace[n]);
 		n = trace[n];
 		ans.pb(t);
	}
	
	for (int i=ans.size()-1; i>=0; i--) cout << ans[i] << endl;
	return 0;
}





