#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c;
    a = 1;
    b = 0;
    c = 1;

    for (; c <= 1e6; a++)
    {
        b += 1 / c;
        c *= a;
    }

    cout << fixed << setprecision(7) << b;
    return 0;
}