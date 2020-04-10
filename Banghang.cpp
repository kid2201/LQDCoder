#include <bits/stdc++.h>
using namespace std;
int n,k,b[100005];
struct Data
{
    /* data */
    int pos;
    int des;
};
bool compare(Data X, Data Y){
    if (X.des != Y.des)  return X.des >= Y.des;
    return X.pos <= Y.pos;
}
Data a[100005];

int main(){
    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        a[i].pos = i;
        cin>>a[i].des;
    }
    sort(a+1,a+1+n,compare);
    for (int i = 1; i <=k ; i++)
    b[i] = a[i].pos;
    sort(b+1, b+1+k);
    for (int i = 1; i <= k; i++) cout<<b[i]<<" ";
}