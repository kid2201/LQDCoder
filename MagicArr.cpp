#include <bits/stdc++.h>
using namespace std;
long long a[100005],n,i;
int main(){
    cin>>n;
    for (i=1; i <=n; i++) cin>>a[i];
    for (i=1; i<n; i++)
    if (abs(a[i+1] - a[i]) >= 2) {
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
}