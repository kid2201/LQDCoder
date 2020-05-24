#include <bits/stdc++.h>
using namespace std;
string s;
int N;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>N;
    for (int T = 1; T <= N; T++){
        cin >> s;
        int res = 0;
        int si = s.size();
        string tmp="";
        for (int i = 0; i <= si-1; i++)
        {
            tmp = tmp + s[i];
            int k = si / (tmp.size());
            string s1 ="";
            for (int j = 1; j <= k; j++) s1 = s1+tmp;
            if (s==s1){
                cout<<tmp<<endl;
                break;
            }
        }
    }
    

}