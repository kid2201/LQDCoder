#include <bits/stdc++.h>
using namespace std;
string s;
long long res = 0,i;
int main(){
    cin>>s;
    for (i = 0; i < s.size(); i++)
    if (s[i]=='8') res +=2 ;
    else
    {
         if (s[i]=='4'||s[i]=='6'|| s[i]=='9'|| s[i]=='0') res ++;
    }
    cout<<res;
}