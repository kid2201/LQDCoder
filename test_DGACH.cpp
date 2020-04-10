#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i=1,x=0,s=0,j=1;
    cin>>n;
    while(s<n)
    {
        j=i*2;
        x=i+j;
        s=s+x;
        i++;
    }
    cout<<s<<endl;
    s=s-n;
    cout<<s;
    if(s>=0)
    {
        cout<<"Motu";
    }
    else if(s<0)
    {
        cout<<"Patlu";
    }
}
