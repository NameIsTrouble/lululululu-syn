/*
    深度优先搜索
*/
#include <bits/stdc++.h>
using namespace std;
long long int Martix[9][9], n, k, sum = 0;
bool judge[9];//判断每一列的使用情况
void DFS(int x, int cou)
{
    if (cou == k)//如果棋盘上的棋子足够 则总数加一
    {
        sum++;
        return;
    }

    if (x >= n)//如果行数超范围 直接结束
    {
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (judge[j] && Martix[x][j])//如果此位置可以下棋
        {
            judge[j] = false;//将此列标否
            cou++;//棋子数加一
            DFS(x + 1, cou);//判断下一行
            judge[j] = true;//判断下一行结束后 继续判断此行 将该列标是
            cou--;//棋子数复原
        }
    }

    DFS(x + 1, cou);//如果此行不存在可下棋的位置 判断下一行
    return;
}
int main()
{
    while (cin >> n >> k && n != -1 && k != -1)
    {
        memset(Martix, 0, sizeof(Martix));
        memset(judge, true, sizeof(judge));
        char x;
        coun = 0;
        sum = 0;

        for (int i = 0; i < n; i++)//棋表数据化
        {
            for (int j = 0; j < n; j++)
            {
                cin >> x;

                if (x == '#')
                {
                    Martix[i][j] = 1;
                }
            }
        }

        DFS(0, 0);
        cout << sum << endl;
    }

    system("pause");
    return 0;
}
/*
8 8
########
########
########
########
########
########
########
########*/