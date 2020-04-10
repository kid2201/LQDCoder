// Example program
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
   long long a,b;
   int d=0;
   cin>>a>>b;
   while(a<=b){
    a*=2;
    if(a>b)
    break;
    d++;
   }
   cout <<d;
}
    
