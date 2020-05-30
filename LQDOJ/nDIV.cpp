#include<stdio.h>
//using namespace std;


int D[1000005];
int T, l, r;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);
	
	for (int i = 1; i <= 1e6; i++) 
		for (int j = i; j <= 1e6; j += i) D[j]++;
	
	for (int i = 1; i <= 1e6; i++) 
		D[i] = D[i-1] + D[i];
	
	
	//cin >> T;
	scanf("%d",&T);
	while (T--) {
		//cin >> l >> r;
		scanf("%d%d",&l,&r);
		//cout << D[r] - D[l-1] << endl;
		printf("%d\n",D[r]-D[l-1]);
	}
	return 0;
}

