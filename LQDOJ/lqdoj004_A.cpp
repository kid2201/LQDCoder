#include <bits/stdc++.h>
using namespace std;
int L,R,M,res=1e9;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>L>>R>>M;
    for (int i =L; i <=R; i++){
        for (int j = i+1; j <= R; j++) res = min((i*j)%M, res);
    }
    cout<<res;
}