#include <iostream>
#include <string>
using namespace std;
int radix, n, sum, a[1001];
string s;
bool p(int n)
{
    for (int i = 1; i <= n / 2; i++)
        if (a[i] != a[n - i + 1])
            return false;
    return true;
}
int add(int n)
{
    int c[1001] = { 0 };
    for (int i = 1; i <= n; i++)
    {
        c[i] = a[i] + a[n - i + 1] + c[i];
        c[i + 1] += c[i] / radix;
        c[i] %= radix;
    }
    if (c[n + 1])
        n++;
    for (int i = n; i >= 1; i--)
    {
        a[i] = c[i];
    }
    return n;
}
int main()
{
    cin >> radix >> s;
    n = s.size();
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] < 65)
            a[i] = s[i - 1] - '0';
        else
            a[i] = s[i - 1] - 55;

    }
    while (sum <= 30)
    {
        if (p(n))
        {
            cout << "STEP=" << sum << endl;
            return 0;
        }
        sum++;
        n = add(n);
    }
    cout << "Impossible!" << endl;
    return 0;
}