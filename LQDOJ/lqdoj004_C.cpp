#include <bits/stdc++.h>
using namespace std;
int n, m;
string a, b, c, d;
long long x = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    cin >> a >> b >> c >> d;
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == '1' && b[i] == '1')
            res = (res * 2) % x;
    }
    cout << res;
    return 0;
}


