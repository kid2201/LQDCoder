#include <bits/stdc++.h>
using namespace std;
int a[10005], L[10005], res, n;
int main(){
    cin>>n;
    for (int i = 1; i <= n ; i++) cin>>a[i];
    for (int i = 1; i <=n; i++){
         
        res = max(L[i],res);
    }
    cout<<res;
}