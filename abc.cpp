#include<stdio.h>
int main()
{
    int a,b,sl=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++) if (a%b==0) sl=sl+1;
    printf("%d",a);
}
    
