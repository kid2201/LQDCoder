#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long tmp = sqrt(n),i;
    for (i=tmp; i>=1; i--)
    if (n % (i*i) == 0){
        cout<<i;
        return 0;
    }
    
}