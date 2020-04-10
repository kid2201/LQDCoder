#include <bits/stdc++.h>
using namespace std;
long long a[100005],res,i,n,k;
int check(long long l, long long r,long long x)
{
    long long  mid;
    while (l<=r) {
        mid = (l + r) / 2;
        if (a[mid]==x) return 1;
        if (a[mid] > x) r = mid - 1;
            else l = mid + 1;
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    for(i=1; i <=n;i++) cin>>a[i];
    sort(a+1, a+1+n);
    for (i=1; i <=n ; i++)
        if (check(1,n,a[i]+k)) res ++;
    cout<<res;
}
    
