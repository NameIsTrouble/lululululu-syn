/*
    水题
*/
#include <iostream>
#include <algorithm>

using namespace std;

struct node
{
    long long num;
    int rank;
};

bool cmp(node a, node b)
{
    if (a.num == b.num)
    {
        return a.rank < b.rank;
    }
    else
    {
        return a.num > b.num;
    }
}

int main()
{
    int N, M;
    cin >> N >> M;
    node MoonCake[N];

    for (int i = 0; i < M; i++)
    {

        for (int j = 0; j < N; j++)
        {
            if (!i)
            {
                MoonCake[j].num = 0;
                MoonCake[j].rank = j + 1;
            }

            long long temp;
            cin >> temp;
            MoonCake[j].num += temp;
        }
    }

    sort(MoonCake, MoonCake + N, cmp);

    long long maxnum = MoonCake[0].num;
    cout << maxnum << endl << MoonCake[0].rank;

    for (int i = 1; i < N; i++)
    {
        if (MoonCake[i].num == maxnum)
        {
            cout << " " << MoonCake[i].rank;
        }
    }
    cout << endl;

    system("pause");
    return 0;
}