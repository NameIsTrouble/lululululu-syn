#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n = 0, l;
        string a;
        cin >> l >> a;

        for (int i = 0; i <= l - 4; ++i)
        {
            if (a.substr(i, 4) == "mrnb")
                ++n;
        }

        if (n)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    // system("pause");
    return 0;
}