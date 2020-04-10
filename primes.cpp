#include<iostream>
#include<math.h>
using namespace std;
long long a[100005],i,n,j,dem=0,g,vt,m=0,snt,dau;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];}
    for(j=1;j<=n;j++)
    {
        dau=1;
  		for(i=2;i<=sqrt(a[j]);i++)
      	if(a[j]%i==0) {dau=0;break;}
      	
  		if(dau==1&&a[j]>m)
  		{
      		m=a[j];
      		//cout<<m<<" ";
  		}
  
	}
   cout<<m<<endl;

for(j=1;j<=n;j++)
{
    if(m==a[j]) cout<<j<<" ";
    
}


}
    
