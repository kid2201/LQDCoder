#include <stdio.h>
#include <math.h>
int main() {
	int i,n,k, tong = 0;
	scanf("%d",&n);
	k = sqrt(n);
	for(i=1; i<= k; i++)
	if (n%i==0) tong = tong + i + n/i;
	//if (k*k==n) tong = tong - k;
	if (tong == 2*n) printf("YES");
	else printf("NO");
}
