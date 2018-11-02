#include <iostream>
using namespace std;
int main()
{
    int n, x, y, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &x);
            sum += x;
        }
        if (i == n - 1)
            printf("%d\n", sum);
        else
            printf("%d\n\n", sum);
    }
    system("pause");
    return 0;
}