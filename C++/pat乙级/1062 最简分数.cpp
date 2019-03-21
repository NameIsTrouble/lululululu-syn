/*
    水题
*/
#include <iostream>

using namespace std;

// 辗转相除法求最大公约数
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int N1, N2, M1, M2, K, i = 1;
    bool flag = false;

    scanf("%d/%d%d/%d%d", &N1, &M1, &N2, &M2, &K);

    if (N1 * M2 > N2 * M1)
    {
        swap(N1, N2);
        swap(M1, M2);
    }

    while (i * M1 <= K * N1)
        i++;

    for (; i * M2 < K * N2; ++i)
    {
        if (gcd(i, K) == 1)
        {
            printf("%s%d/%d", flag ? " " : "", i, K);
            flag = true;
        }
    }

    cout << endl;
    system("pause");
    return 0;
}