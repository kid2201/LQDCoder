#include <bits/stdc++.h>
using namespace std;
string s,res = "";
int main(){
    getline(cin,s);
    s = s + ' ';
    while (!s.empty()){
        int pos = s.find(" ");
        //cout<<pos<<endl;
        string tmp = s.substr(0,pos);
        //cout<<tmp<<endl;
        if (pos > s.size()) break;
        else s.erase(0,pos+1);
        //cout<<s<<endl;
        if (tmp.size() > res.size()) res = tmp;
        else
        {
            if (tmp.size() == res.size() && tmp > res ) res = tmp;
        }
        
    }
   cout<<res;
}
