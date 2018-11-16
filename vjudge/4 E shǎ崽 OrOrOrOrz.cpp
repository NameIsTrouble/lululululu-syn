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
        sort(test, test + n);
        int prf[10010];
        int j = 0,l;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                prf[j] = test[n - 1 - i];
                j++;
                prf[j] = test[i];
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
            prf[j] = test[(n - 1) / 2];
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
        //printf("%d\n", prf[j - 1]);
    }
    //system("pause");
    return 0;
}