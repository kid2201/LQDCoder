#include<iostream>
using namespace std;
long long M = 1e9+7;
int main()
{
    long long a,b=1,c[1000];
    cin>>a;
    for(int i=0;i<a;i++)
        cin>>c[i];
    for(int i=0;i<a;i++)
    {
        b=b*(c[i]%M);
    }
    cout<<b;
}
    
