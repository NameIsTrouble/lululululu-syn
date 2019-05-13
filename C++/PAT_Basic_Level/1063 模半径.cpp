/*
    大水题
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, max = 0;
    cin >> N;

    while (N--)
    {
        int a, b;
        cin >> a >> b;
        if (a * a + b * b > max)
            max = a * a + b * b;
    }

    printf("%.2lf\n", sqrt(max));

    system("pause");
    return 0;
}