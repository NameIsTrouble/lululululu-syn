#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n * n / 2 << endl;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j += 2)
                {
                    cout << "C.";
                }
            }

            else
            {
                for (int j = 0; j < n; j += 2)
                {
                    cout << ".C";
                }
            }
            cout << endl;
        }
    }
    else
    {
        cout << ((n + 1) / 2) * ((n + 1) / 2) + ((n - 1) / 2) * ((n - 1) / 2) << endl;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j += 2)
                {
                    cout << "C";
                    if (j != n - 1)
                    {
                        cout << '.';
                    }
                    else
                    {
                        cout << endl;
                    }
                }
            }

            else
            {
                for (int j = 0; j < n; j += 2)
                {
                    cout << '.';
                    if (j != n - 1)
                    {
                        cout << "C";
                    }

                    else
                    {
                        cout << endl;
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}