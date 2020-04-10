#include <bits/stdc++.h>
using namespace std;
string s[105];
long long n, m, res = 0, i, j;

string Reversestr(string p){
    string tmp = "";
    int si = p.size();
    for (int l = si-1; l>=0; l--) tmp +=p[l];
    return tmp;
}

bool CheckPar(string p){
    int si = p.size();
    for (int l = 0; l <= si/2; l++)
    if (p[l]!=p[si-l-1]) return 0;
    return 1;
}

int main(){
    cin>>n>>m;
    for (i=1; i<=n; i++) cin>>s[i];
    for (i=1; i<n; i++)  {
        string tmp = Reversestr(s[i]);
        for (j = i+1; j<=n; j++)
        if (s[j]==tmp) {
            res+=2;
            break;
        }
    }

    for (i = 1 ; i<=n; i++)
    if (CheckPar(s[i])) {
            res++;
            break;
    }

    cout<<res*m;
} 