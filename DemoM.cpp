#include <stdio.h>
int a[10005];
int main() {
	int i,n, tong = 0;
	scanf("%d",&n);
	for(i=1; i<=n; i++) scanf("%d",&a[i]);
	for (i=1; i<=n; i++) 
	if (a[i] %2 ==0) tong = tong + a[i];
	printf("%d", tong);
}
