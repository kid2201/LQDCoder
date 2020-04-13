#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int D1[500], D2[500], res;
int main(){
    cin>>s1>>s2;
    for (int i = 0; i < s1.size() ; i++) 
        D1[s1[i]]++;
    for (int i = 0; i < s2.size(); i++)
        D2[s2[i]]++;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (D1[i] != 0 && D2[i] == 0) 
            res += D1[i];
        if (D1[i] == 0 && D2[i] != 0)
            res += D2[i];
    }
    cout<<res;
}