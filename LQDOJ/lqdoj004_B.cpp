#include <bits/stdc++.h>
using namespace std;
int n,a[1000009];
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (int i = 1; i <= n; i++){
        int tmp;
        cin >> tmp;
        a[tmp] =  i;
    }
    for (int i = 1; i <= n; i++)
    cout<<a[i]<<" ";
}