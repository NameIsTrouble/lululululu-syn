/*
    注意输出时用printf
    否则会超时
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

struct node
{
    string ID;
    int score;
} temp[10005];

bool cmpins(const node &a, const node &b)
{
    if (a.score == b.score)
        return a.ID < b.ID;
    else
        return a.score > b.score;
}

int N, M;

int main()
{
    ios::sync_with_stdio(false);
    cin >> N >> M; 

    for (int i = 0; i < N; i++)
        cin >> temp[i].ID >> temp[i].score;

    for (int j = 1; j <= M; j++)
    {
        bool judge = false;
        string Op;
        char fun;
        cin >> fun >> Op;

        printf("Case %d: %c %s\n", j, fun, Op.c_str());
        vector<node> ans;

        switch (fun)
        {
        case '1':
        {
            for (int i = 0; i < N; i++)
            {
                if (temp[i].ID[0] == Op[0])
                {
                    ans.push_back(temp[i]);
                    judge = true;
                }
            }
            sort(ans.begin(), ans.end(), cmpins);
            if (judge)
                for (int i = 0; i < ans.size(); i++)
                    printf("%s %d\n", ans[i].ID.c_str(), ans[i].score);
            else if (!judge)
                printf("NA\n");

            break;
        }
        case '2':
        {
            int n = 0, s = 0;

            for (int i = 0; i < N; i++)
            {
                if (temp[i].ID.substr(1, 3) == Op)
                {
                    judge = true;
                    n++;
                    s += temp[i].score;
                }
            }
            if (judge)
                printf("%d %d\n", n, s);
            else
                printf("NA\n");

            break;
        }
        case '3':
        {
            unordered_map<string, int> tep;

            for (int i = 0; i < N; i++)
                if (temp[i].ID.substr(4, 6) == Op)
                    tep[temp[i].ID.substr(1, 3)]++;

            for (unordered_map<string, int>::iterator it = tep.begin(); it != tep.end(); it++)
                ans.push_back({it->first, it->second});

            if (ans.size())
            {
                sort(ans.begin(), ans.end(), cmpins);

                for (int i = 0; i < ans.size(); i++)
                    printf("%s %d\n", ans[i].ID.c_str(), ans[i].score);
            }

            if (!ans.size())
                printf("NA\n");

            break;
        }
        }
    }

    system("pause");
    return 0;
}