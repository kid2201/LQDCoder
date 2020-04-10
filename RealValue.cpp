#include <bits/stdc++.h>
using namespace std;
long long Tachso(long long x){
    long long sum = 0;
    while (x != 0){
        
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
long long n ;

int main(){
    cin>>n;
    while (n>5){
        n = Tachso(n)/2;
    }    
    cout<<n;
}