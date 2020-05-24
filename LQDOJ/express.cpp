#include <bits/stdc++.h>
using namespace std;
long long a[10005],n;
//,max1,max2,imax1,imax2,b[10000],s1,s2;
long long res = 0, sum=0, tmp;
int main(){
    ios_base::sync_with_stdio(0);
    cin>>n;
    for( int i = 1; i <=n; i++) cin>>a[i];
    // imax1 = 0; imax2 = 0;
    // max1 = -1e9;
    // max2 = -1e9;
    // for (int i = 1; i <=n; i++) 
    // if (a[i] > max1) {
    //     imax1 = i;
    //     max1 = a[i];
    // }
    // for (int i = 1; i <= n; i++)
    // if (imax1!=i && a[i] > max2)
    // {
    //     imax2 = i;
    //     max2 = a[i];
    // }
    // //cout<<imax1<<" "<<imax2; 

    // if (imax2 - imax1 == 1){
    //     if (a[imax1 - 1] > a[imax2 + 1])
    //     {
    //         s1 = a[imax1 - 1] * a[imax1] * a[imax2];
    //     }
            
    // }
    
    // if (a[imax1-1] > a[imax1+1]) {
    //     s1 = a[imax1 - 1]*a[imax1];
    //     b[imax1 - 1] = 1;
    //     b[imax1] = 1;
    // }
    // else
    // {
    //     s1 = a[imax1 + 1] * a[imax1];
    //     b[imax1 + 1] = 1;
    //     b[imax1] = 1;
    // }

    // if (a[imax2 - 1] > a[imax2 + 1])
    // {
    //     s2 = a[imax2 - 1] * a[imax2];
    //     b[imax2 - 1] = 1;
    //     b[imax2] = 1;
    // }
    // else
    // {
    //     s2 = a[imax2 + 1] * a[imax2];
    //     b[imax2 + 1] = 1;
    //     b[imax2] = 1;
    // }
    // cout<<s1<<" "<<s2;
    // // for (int i = 1; i <=n ; i++)
    // // {
    // //     if (i == imax1)
    // // }
    for (int i = 1; i <=n ; i++) sum += a[i];
    for (int i = 1; i <= n-2 ; i++)
	for (int j = i+1; j <= n-1; j++)
	if (j==i+1){
		tmp = sum - (a[i]+a[i+1]+a[i+2])+(a[i]*a[i+1]*a[i+2]);
		res = max(res, tmp);
	}
	else
	{
		tmp = sum - (a[i]+a[i+1]+a[j]+a[j+1]) + a[i]*a[i+1]+a[j]*a[j+1];
		res = max(res,tmp);
	}
	cout<<res;
}
