#include <bits/stdc++.h>
using namespace std;
int a[1000000], res,s[1000000];
int T,N;
int main()
{
    cin >> T;
    for (int i = 1; i <=T; i++){
        cin>>N;
        int s1= 0;
        for (int j = 1; j <= N; j++){
            cin >>a[j];
            cout<<j<<a[j];
            if (a[j]>0) s1+=a[j];
        }
        cout << endl;
        for (int j = 1; j <= N; j++) cout<<a[j]<<" ";
        cout<<endl;
            cout << N << " " << s1 << endl;
    }
}