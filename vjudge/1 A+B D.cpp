#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    scanf("%d", &n);
    while (n != 0)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            sum += x;
        }
        printf("%d\n", sum);
        scanf("%d", &n);
    }
    system("pause");
    return 0;
}