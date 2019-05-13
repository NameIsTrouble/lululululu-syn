#include <iostream>

using namespace std;

int main()
{
    int num[110] = {0};
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        num[x]++;
    }

    int n2;
    scanf("%d", &n2);

    for (int i = 0; i < n2; i++)
        if (i != n2 - 1)
        {
            scanf("%d", &x);
            printf("%d ", num[x]);
        }
        else
        {
            scanf("%d", &x);
            printf("%d", num[x]);
        }

    system("pause");
    return 0;
}