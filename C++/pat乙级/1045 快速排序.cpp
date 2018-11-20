//WA
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int test[100010], flag[100010] = {0}, prf[100010], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &test[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (test[i] < test[j])
            {
                flag[i] = 1;
                break;
            }
        }
        for (int j = i + 1; j < n && flag[i] != 1; j++)
        {
            if (test[i] > test[j])
            {
                flag[i] = 1;
                break;
            }
        }
        if (flag[i] == 0)
        {
            prf[count] = test[i];
            count++;
        }
    }
    sort(prf, prf + count);
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        if (i == count - 1)
        {
            printf("%d\n", prf[i]);
        }
        else
        {
            printf("%d ", prf[i]);
        }
    }
    system("pause");
    return 0;
}