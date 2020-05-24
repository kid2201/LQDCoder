#include <bits/stdc++.h>
using namespace std;
struct data{
    int gt,cs;
};
data a[100005];
int N, b[100005];
bool ss(data X, data Y){
    return X.gt < Y.gt;
}
int main(){
    cin>>N;
    for(int i = 1; i <=N; i++){ 
        cin>>a[i].gt;
        a[i].cs = i;
    }
    sort(a+1, a+1+N,ss);
    for (int i =1; i <=N; i++){
        int res = 0;
        if (a[i-1].gt!=a[i].gt) res = i-1;
        else res = b[a[i-1].cs];
        b[a[i].cs]= res;
        //cout<<res;
    }
    for(int i = 1; i <=N; i++) cout<<b[i]<<" ";
}