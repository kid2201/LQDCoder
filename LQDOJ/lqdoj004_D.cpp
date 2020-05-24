#include <bits/stdc++.h>
using namespace std;
long long L,R,M,res=1e9;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>L>>R>>M;
    if (R-L + 1 >= M) {
        cout<<0;
        return 0; 
    }
    for (long long i =L; i <=R; i++){
        for (long long j = i+1; j <= R; j++) res = min((i*j)%M, res);
    }
    cout<<res;
}