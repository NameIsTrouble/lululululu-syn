/*
    深度优先搜索+奇偶剪枝
*/ 
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int sx, sy, ex, ey, n, m, c, flag, cou;
int mar[8][8], judge[8][8];
void DFS(int x, int y, int cou)
{
    if (mar[x][y] == 3 && cou == c)//如果到达终点满足时间条件
    {
        flag = 1;//判断为有
        return;//返回
    }
    if (judge[x - 1][y] && mar[x - 1][y] && x - 1 >= 0)//左移
    {
        judge[x - 1][y] = 0;//将该点判为已使用
        DFS(x - 1, y, cou + 1);//深度搜索
        judge[x - 1][y] = 1;//还原
    }
    if (judge[x + 1][y] && mar[x + 1][y] && x + 1 < n)
    {
        judge[x + 1][y] = 0;
        DFS(x + 1, y, cou + 1);
        judge[x + 1][y] = 1;
    }
    if (judge[x][y - 1] && mar[x][y - 1] && y - 1 >= 0)
    {
        judge[x][y - 1] = 0;
        DFS(x, y - 1, cou + 1);
        judge[x][y - 1] = 1;
    }
    if (judge[x][y + 1] && mar[x][y + 1] && y + 1 < m)
    {
        judge[x][y + 1] = 0;
        DFS(x, y + 1, cou + 1);
        judge[x][y + 1] = 1;
    }
    if (flag)//如果找到 
    {
        return;
    }
}
int main()
{
    while (scanf(" %d %d %d", &n, &m, &c) && n && m && c)
    {
        memset(mar, 0, sizeof(mar));
        memset(judge, 0, sizeof(judge));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                scanf(" %c", &x);
                if (x == 'S')
                {
                    mar[i][j] = 2;
                    sx = i;
                    sy = j;
                }
                else if (x == '.')
                {
                    judge[i][j] = 1;
                    mar[i][j] = 1;
                }
                else if (x == 'D')
                {
                    judge[i][j] = 1;
                    mar[i][j] = 3;
                    ex = i;
                    ey = j;
                }
            }
        }
        if (abs(sx - ex) + abs(sy - ey) - c > 0)//如果要求时间小于最小时间
        {
            cout << "NO\n";
            continue;
        }
        if ((c - abs(sx - ex) - abs(sy - ey)) % 2 == 1)//当要求时间与最小时间的差值为奇数时
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            flag = 0;
            DFS(sx, sy, 0);
            if (flag)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    system("pause");
    return 0;
}
/*
    奇偶剪枝
    可以得知如果要求时间大于最小时间
    一定为多移了几个位置
    为了满足坐标要求
    多的纵坐标和横坐标要再次移动回来
    其时间一定为偶数
*/