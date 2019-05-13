/*
    矩阵快速幂nb！！！！
*/
#include <bits/stdc++.h>
using namespace std;
int m;
struct Martix
{
    int a[4][4];
};
Martix operator*(Martix b, Martix c)
{
    Martix d;
    memset(d.a, 0, sizeof(d.a));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int z = 0; z < 4; z++)
            {
                d.a[i][j] += (b.a[i][z] * c.a[z][j]) % m;
            }
        }
    }
    return d;
}
Martix operator^(Martix e, int n)
{
    int x = n;
    Martix pr;
    memset(pr.a, 0, sizeof(pr.a));
    for (int i = 0; i < 4; i++)
    {
        pr.a[i][i] = 1;
    }
    while (x)
    {
        if (x % 2)
        {
            pr = pr * e;
        }
        e = e * e;
        x /= 2;
    }
    return pr;
}
int main()
{
    int L;
    while (cin >> L >> m)
    {
        if (L == 0)
        {
            cout << 0 % m << endl;
        }
        else if (L == 1)
        {
            cout << 2 % m << endl;
        }
        else if (L == 2)
        {
            cout << 4 % m << endl;
        }
        else if (L == 3)
        {
            cout << 6 % m << endl;
        }
        else
        {
            Martix s;
            memset(s.a, 0, sizeof(s.a));
            s.a[0][0] = 1;
            s.a[0][2] = 1;
            s.a[0][3] = 1;
            s.a[1][0] = 1;
            s.a[2][1] = 1;
            s.a[3][2] = 1;
            s = s ^ (L - 4);
            long long prf = ((s.a[0][0] * 9) % m + (s.a[0][1] * 6) % m + (s.a[0][2] * 4) % m + (s.a[0][3] * 2) % m) % m;
            cout << prf % m << endl;
        }
    }
    system("pause");
    return 0;
}
/*
    推出关键公式 f(n)=f(n-1)+f(n-3)+f(n-4)
    直接矩阵快速幂即可
*/