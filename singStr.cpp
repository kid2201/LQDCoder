#include <bits/stdc++.h>
using namespace std;
string s;
int D[500],L,R,res;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>s;
    int si = s.size();
    for (R = 0; R < si; R++){
        D[s[R]]++;
        while (D[s[R]]==2){
            D[s[L]]--;
            L++;
        }
        // cout<<L<<" "<<R<<" ";
        // for (int j = L; j<=R; j++) cout<<s[j];
        // cout<<" "<<res<<endl;
        res = max(res,R-L+1);
    }
    cout << res;
}
/*
abcabcEEb

*/