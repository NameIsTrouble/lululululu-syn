/*
    注意双向表和重边
*/
#include <iostream>
#include <string.h>
#define INF 0x3f3f3f3f3f

using namespace std;

int main()
{
    int T, N;
    cin >> T >> N;

    bool vis[N + 1];
    int dis[N + 1];
    int anx[N + 1][N + 1];

    memset(vis, false, sizeof(vis));
    memset(dis, INF, sizeof(dis));
    memset(anx, INF, sizeof(anx));
    dis[N] = 0;

    for (int i = 0; i < N + 1; ++i)
        anx[i][i] = 0;

    for (int i = 1; i < T + 1; ++i)
    {
        int index, v, w;
        cin >> index >> v >> w;
        anx[index][v] = min(w, anx[index][v]); //双向表 去重
        anx[v][index] = min(w, anx[v][index]);
    }

    for (int i = 0; i < N; ++i)
    {
        int MIN = INF, index;

        for (int j = 1; j < N + 1; ++j)
            if (!vis[j] && MIN > dis[j])
            {
                MIN = dis[j];
                index = j;
            }

        vis[index] = true;

        for (int j = 1; j < N + 1; ++j)
            dis[j] = min(dis[j], dis[index] + anx[index][j]);
    }

    cout << dis[1] << endl;

    system("pause");
    return 0;
}