#include <iostream>
using namespace std;
int main()
{
    int n, i;
    while (cin >> n)
    {
        if (n == 0)
        {
            n = 1;
        }
        else
        {
            for (i = n - 1; i >= 1; --i)
            {
                n = i * n;
            }
        }
        cout << n << endl;
    }
    return 0;
}