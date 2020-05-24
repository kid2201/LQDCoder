#include <bits/stdc++.h>
using namespace std;
long long a[100005];
map<long long, long long> cnt;

int main() {
    //freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    long long n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long res = 0;
    for (int i = 1; i <= n; i++) {
        cnt[a[i]]++;
        long long x = k - a[i] * a[i];
        res += cnt[x];
    }
    cout << res;
    return 0;
}
