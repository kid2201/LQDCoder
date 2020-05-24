#include <bits/stdc++.h>
using namespace std;
int n;
string s;
string key="hello";
void solove(string x){
    int si = x.size()-1, k = 0;
    for (int j = 0; j <= si; j++)
    if (s[j]==key[k]) k++;
    if (k==key.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (int i = 1; i <=n; i++){
        cin>>s;
        solove(s);
    }
}