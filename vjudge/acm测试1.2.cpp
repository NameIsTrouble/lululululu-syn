#include <iostream>
using namespace std;
int main()
{
    int n, m, stu[110] = {0};
    int max, count = 0;
    int score[110][110];
    bool stt[110] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &score[i][j]);
        }
    }
    for (int j = 0; j < m; j++)
    {
        max = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < score[i][j])
            {
                max = score[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (score[i][j] == max)
            {
                if (stt[i] == 0)
                {
                    count++;
                    stt[i] = 1;
                }
            }
        }
    }
    printf("%d\n", count);
    system("pause");
    return 0;
}