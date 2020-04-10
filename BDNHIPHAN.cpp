#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[1000];
	int dem = 0;
	if (n == 0) {
		cout << 0;
	}
	while (n >= 1 ) {
		a[dem] = n % 2;
		n = n / 2;
		dem++;
	}
	for (int i = dem-1; i >= 0 ; i--) {
		cout << a[i];
	}
	return 0;
}
    
