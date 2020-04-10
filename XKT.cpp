#include <bits/stdc++.h>
using namespace std;
string s,p,q;
bool CheckPar(string x){
    int len = x.size();
    for (int j = 0 ; j <= len/2; j++)
    if (x[j] != x[len - j - 1]) return 0;
    return 1;
}
int main(){
    cin>>s;
    int i, si = s.size();
    for (i = 1; i <= si; i++)
    {
        p = s.substr(0,i);
        q = s.substr(i, si - i);
        if (CheckPar(q+p)==1) {
            cout<<i;
            return 0;        }
    }
    cout<<0;
    return 0;
}
