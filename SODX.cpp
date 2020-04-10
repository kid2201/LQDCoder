#include <iostream>

using namespace std;

int x,s,a,i,n;

int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>x;
        s=0;a=x;
        while (a!=0)
        {
            s=s*10+a%10;
            a=a/10;
        }
        if (x==s)
            cout<<x<<" ";
    }
    return 0;
}
    
