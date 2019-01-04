#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, c;
    while (cin >> n >> m >> c && (n && m && c))
    {
        int Mart[8][8];
        bool judge[8][8];
        int step[8][8];
        queue<int> line;
        memset(Mart, 0, sizeof(Mart));
        memset(judge, true, sizeof(judge));
        memset(step, 0, sizeof(step));
        int sx, sy, min = 55, max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                if (x == 'S')
                {
                    Mart[i][j] = 2;
                    judge[i][j] = false;
                    step[i][j] = 0;
                    sx = i;
                    sy = j;
                }
                else if (x == '.')
                {
                    Mart[i][j] = 1;
                }
                else if (x == 'X')
                {
                    Mart[i][j] = 0;
                    judge[i][j] = false;
                }
                else if (x == 'D')
                {
                    Mart[i][j] = 3;
                }
            }
        }
        line.push(sx);
        line.push(sy);
        while (!line.empty())
        {
            int x = line.front();
            line.pop();
            int y = line.front();
            line.pop();
            if (Mart[x][y] == 3)
            {
                if (step[x][y] > max)
                {
                    max = step[x][y];
                }
                if (step[x][y] < min)
                {
                    min = step[x][y];
                }
                continue;
            }
            if (judge[x - 1][y] && x - 1 >= 0)
            {
                step[x - 1][y] = step[x][y] + 1;
                judge[x - 1][y] = false;
                line.push(x - 1);
                line.push(y);
            }
            if (judge[x + 1][y] && x + 1 < n)
            {
                step[x + 1][y] = step[x][y] + 1;
                judge[x + 1][y] = false;
                line.push(x + 1);
                line.push(y);
            }
            if (judge[x][y - 1] && y - 1 >= 0)
            {
                step[x][y - 1] = step[x][y] + 1;
                judge[x][y - 1] = false;
                line.push(x);
                line.push(y - 1);
            }
            if (judge[x][y + 1] && y + 1 < m)
            {
                step[x][y + 1] = step[x][y] + 1;
                judge[x][y + 1] = false;
                line.push(x);
                line.push(y + 1);
            }
        }
        if (c >= min && c <= max)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    system("pause");
    return 0;
}