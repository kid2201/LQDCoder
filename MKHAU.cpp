#include <bits/stdc++.h>
using namespace std;
char s[260];
int n,kq=0;
int main ()
{
    cin>>s;
    n=strlen(s);
    for (int i=0;i<n;i++) kq+=s[i]-48;
    cout<<kq;
}
    
