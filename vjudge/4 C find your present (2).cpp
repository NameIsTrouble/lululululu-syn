/*#include <iostream>
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
            long long num[1073741824] = {0}, num2[1073741825] = {0}, x;
            for (long long i = 0; i < n; i++)
            {
                scanf("%lld", &x);
                if (x > 1073741824)
                {
                    num2[x-1073741824]++;
                    num2[x-1073741824] %= 2;
                }
                else
                {
                    num[x]++;
                    num[x]%=2;
                }
            }
            for (long long i = 0; i < n; i++)
            {
                if (i<=1073741824&&num[i] == 1)
                {
                    printf("%lld\n", i);
                    break;
                }
                else if(i>1073741824&&num2[i-1073741824]==1)
                {
                    printf("%lld\n",i);
                    break;
                }
            }
        }
    }
    system("pause");
    return 0;
}*/
//位运算
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int ans=0,prf;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&prf);
            ans^=prf;
        }
        printf("%d\n",ans);
    }
    system("pause");
    return 0;
}