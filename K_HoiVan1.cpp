#include <bits/stdc++.h>
using namespace std;
long long a,b,i,res;
long long Pre[100];

int SLS(long long x){
    int scs = 0;
    if (  x == 0 ) return 1;
    while (x != 0){
        scs++;
        x/=10;
    }
    return scs;
}

long long DivLeft(long long x, int nber){
    int len = 1;
    for (int l = 1; l <= nber; l++) len *= 10;
    return x / len;
}

long long DivRight(long long x, long long numLeft, int nber)
{
    long long tmpLeft = numLeft;
    for (int l = 1; l <= nber; l++) tmpLeft *= 10;
    return x -  tmpLeft;
}

long long RevLeft(long long x,int oven){
    long long tmp = 0;
    if (!oven) x /= 10;
    while (x != 0){
        tmp = tmp * 10 + x % 10;
        x /= 10;
    }
    return tmp;
}

long long SolvePro(long long x){
    int scs = SLS(x);
    res = Pre[scs/2];

    long long tmp1, tmp2, tmp3;

    if (scs % 2 == 0 ){
        tmp1 = DivLeft(x, scs /  2);
        tmp2 = DivRight(x, tmp1, scs / 2);
        tmp3 = RevLeft(tmp1, 1);
        res += tmp1 - 1;
        if (tmp3 <= tmp2 ) res++;
    }
    else {
        tmp1 = DivLeft(x, scs / 2);
        tmp2 = DivRight(x,tmp1,scs/2);
        tmp3 = RevLeft(tmp1,0);
        res += tmp1 - 1;
        if (tmp3 <= tmp2) res++;
    }
    //cout<<scs<<" "<<tmp1<<" "<<tmp2<<" "<<tmp3<<" "<<res<<endl;
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    Pre[0] = 0;
    Pre[1] = 10;
    Pre[2] = 9;
    for (i = 3; i <= 8; i++)
        Pre[i] = Pre[i - 1] * 10;
    cin>>a>>b;
    cout << SolvePro(b) - SolvePro(a-1);
}