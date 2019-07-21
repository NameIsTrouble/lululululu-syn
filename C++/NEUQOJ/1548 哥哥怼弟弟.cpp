#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num[6];
        for (int i = 0; i < 6; ++i)
            cin >> num[i];

        sort(num, num + 6);

        int olderBro = num[5] + num[4];
        int youngerBro = num[2] + num[3] + num[1];

        if (olderBro > youngerBro)
            cout << "it will be a happy story\n";
        else if (olderBro < youngerBro)
            cout << "what a happy story\n";
        else
            cout << "it must be a happy story\n";
    }
    system("pause");
    return 0;
}