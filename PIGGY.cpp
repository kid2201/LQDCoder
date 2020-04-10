
#include<stdio.h>

const int N=1e6+1;
int a[N],t[N],i,n,m,l,r;
int main()
{
    scanf("%d%d",&n,&m);
    for (i=1;i<=m;i++)
    {
        scanf("%d%d",&l,&r);;
        a[l]++;
        a[r+1]--;
    }
    for (i=1;i<=n;i++) a[i]=a[i]+a[i-1];
    printf("Test a\n");
    for (i=1;i<=n;i++) printf("%d ",a[i]);
    for (i=1;i<=n;i++) t[a[i]]++;
    printf("Test T\n");
    for (i=1;i<=n;i++) printf("%d ",t[i]);
    for (i=m;i>=1;i--) t[i]=t[i]+t[i+1];
    printf("Test T\n");
    for (i=m;i>=1;i--) printf("%d ",t[i]);
//    scanf("%d",&n);
//    for (i=1;i<=n;i++)
//    {
//        scanf("%d",&m);
//        printf("%d\n",t[m]);
//    }
}
    
