/*
G?i dp[i] là k?t qu? bài toán ch? tính t? 1 d?n i (s? xâu palindrome dc c?t ít nh?t ch? tính t? kí t? th? 1 d?n kí t? th? i.
V?y suy ra dp[n] là k?t qu? c?a bài toán.



V?i m?i i, dp[i] dc tính nhu sau:

Cho j t? 1 d?n i, ki?m tra xem string t? j d?n i có ph?i là 1 xâu palindrome hay ko?
N?u ph?i thì dó là 1 cách c?t, v?y dp[i] = dp[j-1] + 1;

Gi? s? có nhi?u cách c?t thì ta l?y min.
Suy ra: dp[i] = min(dp[i], dp[j-1] + 1). v?i j = 1 -> i

K?t h?p trace[i] là v? trí j-1 phù h?p dc ch?n, d? truy vét.
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
	
	// Các kí t? c?a string s b?t d?u t? 1 và k?t thúc t?i n
	s = " " + s;
	ll n = s.size() - 1;
	
	// Vì tìm min nên m?c d?nh là 1e18
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
 	
	// Truy vét d? l?y dc các string palindrome
 	vector<string> ans;
 	while (n > 0) {
 		string t = s.substr(trace[n] + 1, n - trace[n]);
 		n = trace[n];
 		ans.pb(t);
	}
	
	for (int i=ans.size()-1; i>=0; i--) cout << ans[i] << endl;
	return 0;
}





