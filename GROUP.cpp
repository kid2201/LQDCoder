#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int a[1000001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin >> t;
        for (int ii = 0; ii < t; ii++)
        {
            ll n; cin >> n;
            ll k; cin >> k;
            for (ll i = 1; i <= n; i++) cin >> a[i];
            sort(a + 1, a + 1 + n);
            ll ans = 1;
            for (ll i = 2; i <= n; i++){
                if (a[i] - a[i - 1] > k) ans++;
            }
            cout << ans << '\n';
        }
}
    
