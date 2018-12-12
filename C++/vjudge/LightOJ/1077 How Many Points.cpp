/*
    最大公约数
    注意用long long 不然有测试点会出错
*/
#include <bits/stdc++.h>
using namespace std;
//辗转相除法求最大公约数
long long int gcd(long long int x, long long int y)
{
    long long int mi = min(x, y);
    long long int ma = max(x, y);

    while (mi)
    {
        long long int exc = mi;
        mi = ma % mi;
        ma = exc;
    }

    return ma;
}
int main()
{
    int t, ste = 1;
    cin >> t;

    while (t--)
    {
        long long int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (y1 == y2)//特判
        {
            if (x1 == x2)//当两点重合只有一个点在坐标点上
            {
                cout << "Case " << ste << ": 1" << endl;
            }
            else//当两点纵坐标相同
            {
                cout << "Case " << ste << ": " << max(x1, x2) - min(x1, x2) + 1 << endl;
            }

            ste++;
            continue;
        }

        if (x1 != x2)//不符合特判情况的 直接求最大公约数 输出+1
        {
            long long int x = abs(x1 - x2);
            long long int y = abs(y1 - y2);
            cout << "Case " << ste << ": " << gcd(x, y) + 1 << endl;
            ste++;
            continue;
        }
        else//当横坐标相同
        {
            cout << "Case " << ste << ": " << max(y1, y2) - min(y1, y2) + 1 << endl;
            ste++;
            continue;
        }
    }

    system("pause");
    return 0;
}