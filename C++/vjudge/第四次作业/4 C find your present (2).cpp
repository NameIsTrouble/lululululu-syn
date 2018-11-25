//位运算
#include <iostream>
using namespace std;
int main()
{
    int n;
    while (scanf("%d", &n) && n)
    {
        int ans = 0, prf;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &prf);
            ans ^= prf; //异或运算
        }
        printf("%d\n", ans);
    }
    system("pause");
    return 0;
}
/*
    异或运算
    0异或任何数都等于任何数     0^a=a
    1异或任何数都等于任何数取反   1^a=~a      
    任何数异或两次相同的其他的数都等于这个数本身 a=a^b^b=a
    任何数异或自己 把自身置0  a^a=0
    
    那么上面的ans^=prf就可以这样解释
        ans=0
        当输入任意偶数个数a时 ans依然为ans
        当输入任意奇数个数b时 可看作ans^b=b
        最终可得ans为出现次数为奇数个的那个数字
*/




/* 原代码 菜的真实
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
