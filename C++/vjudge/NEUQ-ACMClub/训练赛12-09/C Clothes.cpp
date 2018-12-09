/*
    暴力遍历即可
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long int test[105][105] = {0}, mon[105];//test代表第几个与第几个关联  mon代表花费

    for(int i = 1; i <= n; i++)
    {
        cin >> mon[i];
    }

    long long int u, v;

    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        test[u][v] = 1;//代表第u个与第v个关联
        test[v][u] = 1;
    }

    if(m < 3)
    {
        cout << "-1\n";
        //system("pause");
        return 0;
    }

    long long int min, flag = 1, first = 1;//flag判断是否有结果   first代表min是否是第一个如果是直接赋值

    for(int i = 1; i <= n; i++)//从1开始遍历
    {
        int j, z;

        for(j = 1; j <= n; j++)//判断第i个与第j个关联
        {
            if(test[i][j])//如果关联 判断j的下一个关联
            {
                for(z = j + 1; z <= n; z++)
                {
                    if(test[i][z] && test[j][z])//如果j与z关联 说明三者关联
                    {
                        if(first)//如第一个 直接赋值
                        {
                            min = mon[i] + mon[j] + mon[z];
                            first = 0;
                        }

                        flag = 0;

                        if(min > mon[i] + mon[j] + mon[z])//取小
                        {
                            min = mon[i] + mon[j] + mon[z];
                        }
                    }
                }
            }
        }
    }

    if(flag)
    {
        cout << "-1\n";
    }
    else
        cout << min << endl;

    system("pause");
    return 0;
}