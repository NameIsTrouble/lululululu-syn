#include <iostream>
#include <stdlib.h>

using namespace std;

int weighted[18] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char checksum[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main()
{
    int N;
    bool judge = true;
    cin >> N;

    while (N--)
    {
        string temp;
        bool findChar = false;
        int sum = 0;
        cin >> temp;

        for (int i = 0; i < 17 && !findChar; ++i)
            if (isdigit(temp[i]))
                sum += (temp[i] - '0') * weighted[i];
            else
                findChar = true;

        if (checksum[sum % 11] != temp[17] || findChar)
        {
            cout << temp << endl;
            judge = false;
        }
    }

    if (judge)
        cout << "All passed\n";

    system("pause");
    return 0;
}