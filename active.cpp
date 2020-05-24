#include<bits/stdc++.h>
using namespace std;
long long n,res1,res2,res;
struct data{
    long long gt;
    long long cs;
};
data a[2000005];
bool cmp(data x, data y){
    return x.gt < y.gt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (int i = 1; i <=n ; i++){
        cin>>a[i].gt;
        a[i].cs = i;
    }
    sort(a+1,a+1+n,cmp);
    //for (int i = 1; i<=n; i++) cout<<a[i].gt;
    for (int i = 1; i <=n/2+1; i++){
        res1 = a[i].gt*(abs(a[i].cs-(a[n-i+1].cs)));
        res2 = a[n-i+1].gt*(abs(a[n-1+1].cs-a[i].cs));
        res = res + res1 + res2;
        cout<<a[i].cs<<" "<<a[n-1+1].cs<<" "<<res1<<" "<<res2<<" "<<res<<endl;
    }
   // cout<<res;
}