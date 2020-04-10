#include <bits/stdc++.h>
using namespace std;
void EZ()
{
    #ifndef ONLINE_JUDGE
        freopen("LQD.INP","r",stdin);
        freopen("LQD.OUT","w",stdout);
    #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long n,k,a[1000005],s;
map <int,int> d;
int main()
{
    EZ();
    cin>>n>>k;
    for ( int i = 1;  i <= n ; ++i )
    {
        cin>>a[i];
        d[a[i]]++;
    }
    for ( int i = 1 ; i <= n ; ++i )
    {
        if ( a[i] != k-a[i] )
        {
            s+=d[a[i]]*d[k-a[i]];
            d[a[i]] = 0;
        }
        else
        {
            s += (d[a[i]]*(d[a[i]]-1))/2;
            d[a[i]] = 0;
        }
    }
    cout<<s;
}
    