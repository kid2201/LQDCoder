#include <bits/stdc++.h>
using namespace std;
int a[1000000], b[1000000],res;
int n,k;
int main()
{
    cin>>n>>k;
    for (int i =1; i <=n; i++)
    {
        cin>>a[i];
        b[i] = b[i-1]+a[i];
    }
    for (int i = 1; i<=n-k; i++)
    if (b[i+k-1]-b[i-1]>res)
        res = b[i + k - 1] - b[i - 1];
    cout<<res;
}