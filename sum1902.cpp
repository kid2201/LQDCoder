#include <bits/stdc++.h>
using namespace std;
long long a[1000005],s,l,r,i,sum,n,Min,d=-1,c;

int main()
{
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    cin>>s;
    l = 1;
    r = 1;
    Min = 1e9;
    sum = a[1];
    while (r<=n){
        
        if (sum >= s){
            if (sum == s && r - l + 1 <= Min)
            {
                Min = r - l + 1;
                d = l;
                c = r;
            }
            sum -= a[l];
            l++;
        }
        else{
            r++;
            sum += a[r];
        }
    }
    if (d == -1) Min = -1;
    cout<<Min<<endl;
   //for (i=d; i<=c; i++) cout<<a[i]<<" ";
}