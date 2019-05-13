/*
    注意当数据在 -0.005 ~ 0 之间时
    会四舍五入为 -0.00
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double r1, r2, p1, p2;
    double A, B;
    cin >> r1 >> p1 >> r2 >> p2;
    A = double(r1 * cos(p1) * r2 * cos(p2)) - double(r1 * sin(p1) * r2 * sin(p2));
    B = double(r1 * cos(p1) * r2 * sin(p2)) + double(r2 * cos(p2) * r1 * sin(p1));

    if (A > -0.005 && A < 0)
        printf("0.00");
    else
        printf("%.2lf", A);

    if (B > -0.005 && B <= 0)
        printf("+0.00i\n");
    else if (B > 0)
        printf("+%.2lfi\n", B);
    else
        printf("-%.2lfi\n", abs(B));

    system("pause");
    return 0;
}