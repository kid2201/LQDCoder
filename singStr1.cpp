#include <bits/stdc++.h>
using namespace std;
string s;
int D[500],L,R,res,m=0;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>s;
    int si = s.size();
    for (R = 0; R < si; R++){
        D[s[R]]++;
        if (D[s[R]]==2){
            for (L=0; L<255; L++) D[L] = 0;
            res = max(res, R - m);
            m = R;
        }
       
    }
    cout << res;
}
/*
abcabcEEb
 

*/