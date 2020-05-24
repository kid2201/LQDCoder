#include <bits/stdc++.h>
using namespace std;
int a[10005], L[10005], res, n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        L[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] > a[j] && L[i] < L[j] + 1)
                L[i] = L[j] + 1;
        res = max(L[i], res);
    }
    cout << res;
}
 