/*
    水题
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int M;
    cin >> M;

    while (M--)
    {
        bool flag = false;
        int a, b, c = 1;
        long long temp;
        cin >> a;
        b = a;

        while (a)
        {
            a /= 10;
            c *= 10;
        }

        for (int i = 1; i < 10; i++)
            if ((b * b * i) % c == b)
            {
                cout << i << " " << b * b * i << endl;
                flag = true;
                break;
            }

        if (!flag)
            cout << "No\n";
    }

    system("pause");
    return 0;
}