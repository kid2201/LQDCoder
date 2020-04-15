#include <bits/stdc++.h>
using namespace std;
int res, n, m, D[100005];

struct Data
{
	int st;
	int fn;
	int mon;
};

Data a[100005];

bool cmp(Data X, Data Y)
{
	if (X.fn != Y.fn)
		return X.fn < Y.fn;
	return X.st < Y.st;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].st;
		cin >> a[i].fn;
		cin >> a[i].mon;
	}
	sort(a + 1, a + 1 + n, cmp);
	// for (int i = 1 ; i<= n; i++)
	// cout<<a[i].st<<" "<<a[i].fn<<endl;
	for (int i = 1; i <= n; i++){
		D[i] = a[i].mon;
		for (int j = 1; j < i; j++)
		if (a[j].fn <= a[i].st && D[i] < D[j] + a[i].mon)
			D[i] = D[j] + a[i].mon;
		res = max(res, D[i]);
	}
		
	cout << res;
} 
