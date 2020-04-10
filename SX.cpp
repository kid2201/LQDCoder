#include<bits/stdc++.h>
#define foru(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
using namespace std;
const int M=1e6+1;
ll n,m,t;
ll a[M];
int main(){
    cin>>n>>m>>t;
    a[0]=n/m;
    foru(i,1,m-1) a[i]=(n-i)/m+1;
    int i=0;
    while (t>=a[i] && a[i]>0) t=t-a[i],i++;
    if (t==0) i--,t=a[i];
    if (i>0) t--;
    long long res=t*m+i;
    cout<<res;
}
    