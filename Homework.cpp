#include <bits/stdc++.h>
using namespace std;
int sum,n,m,tmp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n>>m;
    for (int i = 1; i <= m ; i++){
        cin>>tmp;
        sum+=tmp;
    }
    n = n - sum;
    if (n >= 0) cout<<n;
    else cout<<-1;
}