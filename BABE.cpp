// Example program
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    long long a,b,d=0,k=0;
    cin>>a>>b;
    for(int i=1;i<=a/2;i++)
    { 
      if(a%i==0)
       d=d+i;
    }
     for(int i=1;i<=b/2;i++)
    { 
      if(b%i==0)
       k=k+i;
    }
   
    if(d==b && k==a)
    cout <<"YES";
    else
    cout <<"NO";
    
}
    
