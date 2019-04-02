/*
    水题
*/
#include <iostream>

using namespace std;

int N;

int main()
{
    int a3 = 0, b3 = 0;
    cin >> N;

    while (N--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        if (a1 + b1 == a2 && a1 + b1 != b2)
            b3++;
        else if (a1 + b1 == b2 && a1 + b1 != a2)
            a3++;
    }

    cout << a3 << " " << b3 << endl;

    system("pause");
    return 0;
}