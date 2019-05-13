#include <iostream>

using namespace std;

int main()
{
    int plus[18] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char judge[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int s = 1, n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string test;
        cin >> test;
        int ss = 1;
        int sum = 0;
        for (int j = 0; j < 17 && ss; j++)
            if (test[j] >= '0' && test[j] <= '9')
                sum += (test[j] - '0') * plus[j];
            else
                ss = 0;

        sum %= 11;

        if (judge[sum] != test[17] || !ss)
        {
            s = 0;
            cout << test << endl;
        }
    }

    if (s)
        cout << "All passed" << endl;

    system("pause");
    return 0;
}