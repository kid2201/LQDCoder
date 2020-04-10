#include <stdio.h>
long long n,a[1000005],s=0,j,c,i=1,k,d=0;
int main()
{
    //freopen("Cost.inp","r",stdin);
    //freopen("Cost.out","w",stdout);

    scanf("%lld%lld",&n,&k);
    for (c=1;c<=n;c++)
    {
        scanf("%lld",&a[c]);
        
    }
    for (c=1;c<=n;c++)
    {
        s=s+a[c];
        while (s>k&&i<=c)
        {
        	//printf("A\n");
            s=s-a[i];
            //printf("%lld %lld %lld %lld\n",c,i,d,s);
            i++;
            
            
        }
        // printf("B\n");
         if (s<=k) d=d+c-i+1;
       
       
    }
    printf("%lld",d);
}
