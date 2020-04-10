#include <bits/stdc++.h>
using namespace std;
long long a,b,i,res;


bool checkPar(long long x){
    long long tmp = 0, x1 = x;
    while (x != 0){
        tmp = tmp * 10 + x % 10;
        x /= 10;
    }
    if (x1 == tmp) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin>>a>>b;
   
    for (i=a; i<= b; i++)
    if (checkPar(i)) 
    {
        cout<<i<<" ";
         res++;
    }
    cout<<res;
}