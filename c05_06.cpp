#include <stdio.h>
int main()
{
	int n,i,tong=0, sl=0,tbc;
	scanf("%d",&n);
	for(i=2; i<=n; i=i+2) {
		tong = tong + i;
		sl++;
	}
	tbc = tong / sl;
	printf("%d",tbc);
}
