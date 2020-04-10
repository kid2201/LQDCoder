#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef int it;
it n,k,t;
lli kq;
int main ()
{
    cin>>n;
    kq=n;
    while (n>=10)
    {
        k=(n/10)*3;
        kq+=k;
        t=n%10;
        n=k+t;

    }
    cout<<kq;
}
k = 6
kq = 24 + 6

    
