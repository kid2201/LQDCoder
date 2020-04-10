#include <stdio.h>
int main()
{
	int i,n, tong = 0;
	scanf("%d",&n);
	for (i=1; i<=n ; i=i+2) tong = tong + i;
	 printf("%d",tong);
}
