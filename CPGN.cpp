#include <bits/stdc++.h>
using namespace std;
long long n;
int main(){
    cin>>n;
    long long tmp = sqrt(n);
    long long res1 = tmp * tmp;
    long long res2 = (tmp+1)*(tmp+1);
    if (n - res1 < res2 - n) cout<<res1;
    else cout<<res2;
}