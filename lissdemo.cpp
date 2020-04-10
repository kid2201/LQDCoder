#include <bits/stdc++.h>
using namespace std;
string s;
long long b,n,m,d,i,t,a,x[200005],y[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    cin >> s;
    for (i=0;i<n;i++)
    {
        if (s[i]=='('||s[i]=='?') d++;
        else
        {
            if (d>0) d--;
            else t++;
        }
        x[i]=i+1-t-d;
        y[i]=d;
    }
    d=0;t=0;
    for (i=n-1;i>=0;i--)
    {
        if (s[i]==')'||s[i]=='?') d++;
        else
        {
            if (d>0) d--;
            else t++;
        }
        a=n-i-t-d;
        b=d;
        //cout<<a<<" "<<x[i]<<" "<<b<<" "<<y[i]<<endl;
     
        m=max(a+x[i-1]+2*min(b,y[i-1]),m);
    }
    cout << m;
 
}
    
