#include<bits/stdc++.h>
using namespace std;
long long n,k,i,dem=0,s=0,a[100000001];
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    cout<<s<<endl;
    if(s<k) {cout<<"-1";return 0;}
    else{
    sort(a+1, a+1+n, greater<int>());
    for(i=1;i<=n;i++)
    {
        if(s>k)
        {
        	cout<<a[i]<<" "<<s<<endl;
            s=s-a[i]+1;
            dem++;
        }
        else
        {
           // cout<<dem;
            return 0;
        }

    }
    }

}
    
