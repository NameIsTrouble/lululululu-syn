/*
    矩阵快速幂
*/
#include <bits/stdc++.h>
using namespace std;
int m;
//定义矩阵结构体
struct matrix
{
    long long int an[2][2];
};
//重载矩阵乘法
matrix operator *(matrix a, matrix b)
{
    matrix c;
    memset(c.an, 0, sizeof(c.an));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int z = 0; z < 2; z++)
            {
                c.an[i][j] += ((long long )a.an[i][z] * b.an[z][j])%m;
                c.an[i][j] %= m;
            }
        }
    }
    return c;
}
//重载矩阵乘方
matrix operator ^(matrix a,int x)
{
    matrix prf;
    matrix base;
    prf.an[0][0] = 1;
    prf.an[0][1] = 0;
    prf.an[1][0] = 0;
    prf.an[1][1] = 1;
    for (;x;x/=2)
    {
        if (x % 2)
        {
            prf = prf*a;
        }
        a = a*a;
    }
    return prf;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p[5] = {1, 10, 100, 1000, 10000};
        long long int a, b, n;
        cin >> a >> b >> n >> m;
        m = p[m];
        if (!n)
        {
            cout << a % m;
        }
        else if (n == 1)
        {
            cout << b % m;
        }
        else if (n == 2)
        {
            cout << (a % m + b % m) % m;
        }
        else
        {
            matrix anx;
            anx.an[0][0]=1,anx.an[0][1]=1,anx.an[1][0]=1,anx.an[1][1]=0;
            anx=anx^(n-1);
            long long int prf = anx.an[0][0] *b + anx.an[0][1] * a;
            cout << prf % m;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}