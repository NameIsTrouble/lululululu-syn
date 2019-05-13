/*
    注意有前导0时要将前导0一起输出
*/
#include <iostream>
#include <cmath>

using namespace std;

bool IsPrimer(int x)
{
    if (x == 0 || x == 1)
        return false;
    else
        for (int i = 2; i <= sqrt(x); ++i)
            if (!(x % i))
                return false;

    return true;
}

int main()
{
    int L, N;
    string num;
    bool flag = false;

    cin >> L >> N >> num;

    for (int i = 0; i <= L - N; ++i)
    {
        int ans = stoi(num.substr(i, N));

        if (IsPrimer(ans))
        {
            flag = true;
            cout << num.substr(i, N) << endl;
            break;
        }
    }

    if (!flag)
        cout << "404\n";

    system("pause");
    return 0;
}