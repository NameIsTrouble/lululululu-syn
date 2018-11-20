#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i;
    while (cin >> n)
    {
        for (i = 1; i <= n; i++)
        {
            if (i < n)
                cout << setw(n - i) << ' ';
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
        for (i = n - 1; i >= 1; i--)
        {
            cout << setw(n - i) << ' ';
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
    }
}