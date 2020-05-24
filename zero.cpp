#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>s;
    int si = s.size()-1;
    for (int i = si; i>=0; i--)
    if (s[i]=='0'){
        cout<<i+1;
        break;
    }
}