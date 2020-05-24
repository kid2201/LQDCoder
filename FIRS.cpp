/*
Sub1: Làm như theo đề ăn được 7 test
Sub2:

10
Pos:    10 5 4 1 8 2 1 9 5 2
Val:    1  2 3 4 5 6 7 8 9 10
B       0 0 0 0  0 0 0 0 0 0
Sắp xếp tăng dần nhưng lưu vị trí ban đầu của nó

Val:    1 1 2 2  4 5 5 8 9 10
pos:    4 7 6 10 3 2 9 5 8 1
B       0 0 0 0  0 0 0 0 0 0
Duyệt từ cây nhỏ nhất (i=1->n)
Lần i=1:
Cây tại vị trí Pos[1]=4 vậy ta đánh dấu bên trái và phải của nó là 3 và 5
B       0 0 1 1  1 0 0 0 0 0
Lần i=2:
Cây tại vị trí Pos[2]=7 vậy ta đánh dấu bên trái và phải của nó là 6 và 8
B       0 0 1 1  1 1 1 1 0 0
Lần i= 3, 4, 5, 6, 7, 8 đều có B[i]=1 nên ko xét (vì cây đó đã bị chết)
Lần i=9:
Cây tại vị trí Pos[9]=8 vậy ta đánh dấu bên trái và phải của nó là 7 và 9
Lần i=10:
Cây tại vị trí Pos[10]=1 vậy ta đánh dấu bên trái và phải của nó là 0 và 2

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
struct FIRS
{
    LL Val, Pos;
};
FIRS F[100005];
LL A[100005], B[100005], n, i, Res = 0;
void RD()
{
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> A[i];
    A[0] = 1e7;
}

void Sub1() //O(n^2)=10^10 quá time
{
    RD();
    while (true)
    {
        int pos = 0;
        for (i = 1; i <= n; i++)
            if (A[i] < A[pos])
                pos = i;
        if (pos == 0)
            break;
        else
            A[pos] = A[pos - 1] = A[pos + 1] = 1e9, Res++;
    }
    cout << Res;
}
bool ss(FIRS t, FIRS s)
{
    if (t.Val == s.Val)
        return t.Pos < s.Pos;
    return t.Val < s.Val;
}

void RD2()
{
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> F[i].Val, F[i].Pos = i;
    //A[0]=1e7;
}
void Sub2()
{
    RD2();
    sort(F + 1, F + 1 + n, ss);
    //for (i=1;i<=n;i++) cout<<F[i].Val<<" "<<F[i].Pos<<endl;

    for (i = 1; i <= n; i++)
        if (B[F[i].Pos] == 0)
        {
            Res++;
            B[F[i].Pos - 1] = 1;
            B[F[i].Pos + 1] = 1;
        }
    cout << Res;
}
int main()
{

    Sub2();
}
