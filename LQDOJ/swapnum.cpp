#include <bits/stdc++.h>
using namespace std;
string s;
long long sum = 0;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>s;
    int si = s.size()-1;
    sort(s.begin(),s.end(),greater<int>());
    for (int i = 0; i <= si; i++){
        sum += s[i] - 48;
    }
    if ((sum % 3 == 0) && (s[si]=='0')) cout<<s;
    else cout<<-1;
}