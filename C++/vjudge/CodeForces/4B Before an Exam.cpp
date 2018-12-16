/*
    分配时先满足每天的最低时间 再将剩余时间逐一分配
*/
#include <bits/stdc++.h>
using namespace std;
int mi[500];
int ma[500];
int ever[500] = {0};
int main()
{
    int d, sumtime, mn = 0, mx = 0;
    cin >> d >> sumtime;

    for (int i = 0; i < d; i++)
    {
        cin >> mi[i] >> ma[i];
        mn += mi[i];
        mx += ma[i];
    }

    if (mn <= sumtime && mx >= sumtime)
    {
        for (int i = 0; i < d; i++)
        {
            ever[i] += mi[i];
        }

        sumtime -= mn;

        for (int i = 0; i < d; i++)
        {
            if (ever[i] < ma[i])
            {
                int exc=ever[i];
                ever[i] += min(ma[i]-ever[i], sumtime);
                sumtime -= (ma[i] - exc);
            }
            if (sumtime <= 0)
            {
                break;
            }
        }

        cout << "YES" << endl;
        for (int i = 0; i < d; i++)
        {
            cout << ever[i] << ' ';
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    system("pause");
    return 0;
}