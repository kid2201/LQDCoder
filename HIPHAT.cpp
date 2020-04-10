// Example program
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
   long long n,a[10000],d=0;
   cin>>n;
   for (int i=1;i<=n;i++)
   {
    cin>>a[i];
    if(a[i]==1)
    d++;
    else
    d--; 
   }
   if(d<0)
   cout <<-d;
   else
   cout <<d;
}
    
