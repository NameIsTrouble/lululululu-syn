#include <iostream>
using namespace std;
int main()
{
    double n, m;
    while (scanf("%lf %lf", &m, &n) && n != -1 && m != -1)
    {
        double sum = 0, per[1010], num[1010][3], exc1, exc2, exc3;
        for (int i = 0; i < n; i++)
        {
            scanf("%lf %lf", &num[i][0], &num[i][1]);
            per[i] = (num[i][0] / num[i][1]) * 100;
        }
        /*for (int i = 0; i < n; i++)
        {
            printf("%lf \n", per[i]);
        }*/
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (per[j] < per[i])
                {
                    exc1 = num[i][0];
                    num[i][0] = num[j][0];
                    num[j][0] = exc1;
                    exc2 = num[i][1];
                    num[i][1] = num[j][1];
                    num[j][1] = exc2;
                    exc3 = per[i];
                    per[i] = per[j];
                    per[j] = exc3;
                }
            }
        }
        /*for (int i = 0; i < n; i++)
        {
            printf("%lf %lf\n", num[i][0], num[i][1]);
        }*/
        for (int i = 0; i < n; i++)
        {
            if (m > num[i][1])
            {
                sum += num[i][0];
                m -= num[i][1];
            }
            else
            {
                sum += (m / num[i][1]) * num[i][0];
                break;
            }
        }
        printf("%.3lf\n", sum);
    }
    system("pause");
    return 0;
}