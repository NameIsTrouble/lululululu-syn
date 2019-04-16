#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#define INF 0x3f3f3f3f

using namespace std;

struct Edge
{
    int v, w;
    Edge(int _v, int _w) : v(_v), w(_w) {}
};

int main()
{
    int n, m, s;

    while (scanf("%d%d%d", &n, &m, &s) != EOF) //不标会超时
    {
        int dis[n + 1];  //邻接表和距离
        bool vis[n + 1]; //是否已松弛
        memset(vis, false, sizeof(vis));
        memset(dis, INF, sizeof(dis));
        dis[s] = 0;

        vector<Edge> edge[n + 1];

        for (int i = 0; i < m; ++i)
        {
            int p, q, t;
            scanf("%d%d%d", &p, &q, &t);
            edge[q].push_back(Edge(p, t)); //反向建表
        }

        //迪杰斯特拉算法
        for (int i = 0; i < n - 1; ++i)
        {
            int MIN = INF, index = s - 1;

            for (int j = 1; j <= n; j++)
                if (!vis[j] && dis[j] < MIN)
                {
                    MIN = dis[j];
                    index = j;
                }

            vis[index] = true;

            for (int j = 0; j < edge[index].size(); ++j)
            {
                int v = edge[index][j].v, w = edge[index][j].w;
                dis[v] = min(dis[v], dis[index] + w);
            }
        }

        int num;
        scanf("%d", &num);

        vector<int> ans;
        for (int i = 0; i < num; ++i)
        {
            int temp;
            scanf("%d", &temp);
            ans.push_back(dis[temp]);
        }

        sort(ans.begin(), ans.end()); //找最小值

        if (ans[0] == INF)
            printf("-1\n");
        else
            printf("%d\n", ans[0]);
    }

    system("pause");
    return 0;
}