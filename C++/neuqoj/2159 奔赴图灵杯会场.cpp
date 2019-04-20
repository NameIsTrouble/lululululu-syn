#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int sum = n + m;

        cout << (sum % x ? sum / x : sum / x - 1) << endl;
    }

    return 0;
}