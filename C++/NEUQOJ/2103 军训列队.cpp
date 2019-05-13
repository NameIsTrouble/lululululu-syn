#include <iostream>
using namespace std;
int main()
{
    int n, wd, a[100];
    cin >> n >> wd;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (wd > a[n - 1])
    {
        a[n] = wd;
        cout << n + 1 << endl;
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << ' ';
        }
        cout << a[n];
    }
    else if (wd < a[0])
    {
        cout << 1 << endl;
        for (int j = n; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = wd;
        for (int q = 0; q < n; q++)
        {
            cout << a[q] << ' ';
        }
        cout << a[n];
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (wd > a[i] && wd < a[i + 1])
            {
                cout << i + 2 << endl;
                for (int j = n; j > i + 1; j--)
                {
                    a[j] = a[j - 1];
                }
                a[i + 1] = wd;
                for (int q = 0; q < n; q++)
                {
                    cout << a[q] << ' ';
                }
                cout << a[n];
                return 0;
            }
        }
    }
    return 0;
}