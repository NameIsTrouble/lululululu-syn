#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//vector<int> tm;
//vector<int> king;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;

    while (scanf("%d", &n) && n)
    {
        int *tm = new int[n];
        int *king = new int[n];
        //int a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &tm[i]);
            //tm.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &king[i]);
            //king.push_back(a);
        }
        sort(tm, tm + n, cmp);
        sort(king, king + n, cmp);
        //sort(tm.begin(), tm.end(), cmp);
        //sort(king.begin(), king.end(), cmp);
        int j = 0, q = 0, cv = 0, z = n - 1, x = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (tm[j] < king[q])
            {
                cv -= 200;
                q++;
                z--;
                continue;
            }
            if (tm[j] == king[q])
            {
                if (tm[z] > king[x])
                {
                    cv += 200;
                    z--;
                    x--;
                    continue;
                }
                if (tm[z] < king[q])
                {
                    cv -= 200;
                    q++;
                    z--;
                }
                else
                {
                    z--;
                    q++;
                }
                continue;
            }
            if (tm[j] > king[q])
            {
                cv += 200;
                j++;
                q++;
                continue;
            }
        }
        printf("%d\n", cv);
        delete[] tm;
        delete[] king;
    }
    system("pause");
    return 0;
}