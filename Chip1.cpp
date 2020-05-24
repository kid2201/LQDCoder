#include<bits/stdc++.h>
using namespace std;
long long i,k,j;
string s,f="",g;
int main()
{
    getline(cin,s);
    long long si = s.size()-1;
    for(i=0;i<=si;i++)
    {
        f=f+s[i];
        k=s.size()/f.size();
        g="";
        for(j=1;j<=k;j++)
        {
            g=g+f;
        }
        if(g==s)
        {
            cout<<k<<f;
            return 0;
        }
    }
}