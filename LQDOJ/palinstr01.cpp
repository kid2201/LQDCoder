#include <bits/stdc++.h>
using namespace std;
string s;
int solve(string s){
    int si = s.size();
    int cnt = 0;
    for (int i =0; i <= si/2; i++)
    if (s[i]!=s[si-i-1]) cnt++;
    if (cnt>2) {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
int main(){
    while (cin>>s){
        solve(s);
    }
}
//acbca