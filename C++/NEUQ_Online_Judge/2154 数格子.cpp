#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c, b = 0, w = 0, re = 0;
        cin >> n >> m >> r >> c;

        int n1, n2;

        if (m % 2)
        {
            if (c % 2)
                n1 = n2 = m / 2;
            else
            {
                n1 = (m - 3) / 2 + 2;
                n2 = m - 1 - n1;
            }
        }
        else
        {
            if (c % 2)
            {
                n1 = m / 2 - 1;
                n2 = m / 2;
            }
            else
            {
                n1 = (m - 2) / 2 + 1;
                n2 = m - 1 - n1;
            }
        }

        if (n % 2)
        {
            if (r % 2)
            {
                cout << 
            }
        }
        
    }

    return 0;
}