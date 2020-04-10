#include <bits/stdc++.h>
using namespace std;
string s;
int D[300],res = 1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>s;
    int si = s.size();
    for (int i = 0; i < si; i++)
    {
        D[s[i]]++;
        if (D[s[i]]==2){
            res++;
            for (int j= 0; j <= 255; j++) D[j] = 0;
            D[s[i]] = 1;
        }
    }
    cout<<res;
}