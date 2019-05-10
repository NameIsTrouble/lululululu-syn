#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == -1)
            break;

        if (!n)
            cout << 1 << endl;
        else
        {
            cout << 5;
            for (int i = 1; i < n; ++i)
                cout << 0;
            cout << 5;
            for (int i = 1; i < n; ++i)
                cout << 0;
            cout << endl;
        }
    }
    return 0;
}