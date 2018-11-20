#include <iostream>
using namespace std;
int main()
{
    long long int a1, a2, a3, n;
    cin >> n;
    a2 = 1;
    a1 = 0;
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            a3 = 2 * a2 + 3 * a1;
            a1 = a2;
            a2 = a3;
        }
        cout << a3;
    }
    else if (n == 1)
    {
        cout << 1;
    }
    else
    {
        cout << a1;
    }
    return 0;
}