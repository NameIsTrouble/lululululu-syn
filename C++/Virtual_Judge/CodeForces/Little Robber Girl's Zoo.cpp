#include <iostream>
using namespace std;
long long test[102];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> test[i];
    }
    int num = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (test[i] > test[i + 1])
            {
                int exc = test[i];
                test[i] = test[i + 1];
                test[i + 1] = exc;
                cout << i + 1 << " " << i + 2 << endl;
                num++;
            }
        }
    }
    system("pasue");
    return 0;
}