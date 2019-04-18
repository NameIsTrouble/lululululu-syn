/*
    简单的排序
    判断奇偶有些蛋疼
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int test[10010];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &test[i]);
        }
        sort(test, test + n);//从小到大排序
        int prf[10010];
        int j = 0,l;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                prf[j] = test[n - 1 - i];//取最大
                j++;
                prf[j] = test[i];//取最小
                j++;
            }
            l=j-1;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                prf[j] = test[n - 1 - i];
                j++;
                prf[j] = test[i];
                j++;
            }
            prf[j] = test[(n - 1) / 2];//如果是奇数 赋中间值
            l=j;
        }
        for (int i = 0; i <= l; i++)
        {
            printf("%d", prf[i]);
            if (i != l )
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    //system("pause");
    return 0;
}