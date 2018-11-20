#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, sum;
    cin >> a >> b >> c >> d >> e;
    sum = a + b + c + d + e;
    if (sum <= 20)
        cout << "passed";
    else
        cout << "failed";
    return 0;
}