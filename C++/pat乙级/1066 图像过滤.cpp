/*
    水题
*/
#include <iostream>
#include <iomanip>

using namespace std;

int artix[501][501];

int main()
{
    int m, n, a, b, exc;
    cin >> m >> n >> a >> b >> exc;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x >= a && x <= b)
            {
                artix[i][j] = exc;
            }
            else
            {
                artix[i][j] = x;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << setfill('0') << artix[i][j];
            if (j != n - 1)
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    system("pause");
    return 0;
}