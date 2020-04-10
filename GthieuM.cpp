#include <bits/stdc++.h>
using namespace std;
long long a[100005];
int main()
{
    long long n,i,s = 0;
   cin>>n;
   for(i=1; i<=n; i++) cin>>a[i];
   for(i=1; i<=n; i++)
        if (a[i] % 2==0) s = s + a[i];
   cout<<s;

}
