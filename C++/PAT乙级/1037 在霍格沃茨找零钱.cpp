#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a1, a2, b1, b2, c1, c2;
    bool flag = false;
    scanf("%d.%d.%d", &a1, &b1, &c1);
    scanf("%d.%d.%d", &a2, &b2, &c2);
    long long int sum1, sum2;
    sum1 = a1 * 29 * 17 + b1 * 29 + c1;
    sum2 = a2 * 29 * 17 + b2 * 29 + c2;
    long long int mu = sum2 - sum1;

    if (mu < 0)
        flag = true;
    else if (mu == 0)
    {
        printf("0.0.0\n");
        system("pause");
        return 0;
    }

    mu = abs(mu);
    int w = mu / (29 * 17);
    mu = mu % (29 * 17);
    int m = mu / 29;

    if (flag == true)
        printf("-%d.%d.%d\n", w, m, mu % 29);
    else
        printf("%d.%d.%d\n", w, m, mu % 29);

    system("pause");
    return 0;
}