#include<bits/stdc++.h>
#include<stack>
using namespace std;
long long a[100001],i,j,n,res;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++) cin >> a[i];
    for (i=1;i<=n;i++)
        for (j=n;j>=i+1;j--)
    {
        if (a[i]<a[j]) {res=max(res,j-i);break;}
    }
    if(res==0) cout << "-1";
    else cout << res;

}
    
