#include <bits/stdc++.h>
using namespace std;
int res, n, m;

struct Data{
    int st;
    int fn;
};

Data a[100005];

bool cmp(Data X, Data Y){
    if (X.fn != Y.fn)  return X.fn < Y.fn;
    return X.st < Y.st;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>a[i].st;
        cin>>a[i].fn;
    }
    sort(a+1, a+1+n, cmp);
    m = a[1].fn;
    res = 1;
    // for (int i = 1 ; i<= n; i++)
    // cout<<a[i].st<<" "<<a[i].fn<<endl;
    for (int i = 2; i <= n; i++)
    if (a[i].st >= m){
        res++;
        m = a[i].fn;
    }
    cout<<res;
}