#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
//vector<vector<long long>> test(MAXN);
#define MAXN 46344
int main()
{
    long long n;
    while (scanf("%lld", &n))
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            //long long *num = new long long[MAXN + 10];
            //memset(num, 0, (MAXN + 10) * sizeof(num));
            long long num[46344][46344]={0},x;
            for (long long i = 0; i < n; i++)
            {
                scanf("%lld", &x);
                num[x/46344][x%46344]++;
                num[x/46344][x%46344] %= 2;
            }
            for (long long i = 0; i < n; i++)
            {
                if (num[i/46344][i%46344] == 1)
                {
                    printf("%lld\n", i);
                    break;
                }
            }
        }
    }
    system("pause");
    return 0;
}