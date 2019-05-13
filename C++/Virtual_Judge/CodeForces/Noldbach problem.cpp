#include <bits/stdc++.h>
using namespace std;
bool primer[10000005];
vector<int> pri;//素数
vector<int> pri_sum;//相邻两个素数的和
int c=0;
void isprimer()
{
    memset(primer, true, sizeof(primer));
    primer[0] = false;
    primer[1] = false;
    for (int i = 2; i < 10000005; i++)
    {
        if (primer[i])
        {
            pri.push_back(i);
            c++;
            for (int j = i * 2; j < 10000005; j+=i)
            {
                primer[j] = false;
            }
        }
    }
}
void sum()
{
    for (int i = 1; i <= c; i++)
    {
        pri_sum.push_back(pri[i] + pri[i - 1]);
    }
}
int main()
{
    isprimer();//打表
    sum();
    int n, k, count = 0;
    cin >> n >> k;
    if (n == 2)
    {
        count = 0;
    }
    else
    {
        for (int i = 0; pri[i] <= n; i++)
        {
            for (int j = 0; pri_sum[j] <= pri[i]; j++)
            {
                if (pri_sum[j] + 1 == pri[i])
                {
                    count++;
                    break;
                }
            }
        }
    }
    if (count < k)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    system("pause");
    return 0;
}