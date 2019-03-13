#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

struct node
{
    string ID;
    int score;
};

bool cmpins(const node &a, const node &b)
{
    if (a.score == b.score)
    {
        return a.ID < b.ID;
    }
    else
    {
        return a.score > b.score;
    }
}

int N, M;
vector<node> Inf;

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        node t;
        cin >> t.ID >> t.score;
        Inf.push_back(t);
    }

    for (int j = 1; j <= M; j++)
    {
        bool judge = false;
        string Op;
        char fun;
        cin >> fun >> Op;

        cout << "Case " << j << ": " << fun << " " << Op << endl;

        vector<node> ans;

        switch (fun)
        {
        case '1':
        {
            for (int i = 0; i < Inf.size(); i++)
            {
                if (Inf[i].ID[0] == Op[0])
                {
                    ans.push_back(Inf[i]);
                }
            }
            break;
        }
        case '2':
        {
            bool judge = false;
            int n = 0, s = 0;

            for (int i = 0; i < Inf.size(); i++)
            {
                if (Inf[i].room == Op)
                {
                    judge = true;
                    n++;
                    s += Inf[i].score;
                }
            }
            if (judge)
            {
                cout << n << ' ' << s << endl;
            }
            else
            {
                cout << "NA\n";
            }
            break;
        }
        case '3':
        {
            bool judge = false;
            vector<dat> ans;
            unordered_map<string, int> temp;

            for (int i = 0; i < Inf.size(); i++)
            {
                if (Inf[i].date == Op)
                {
                    temp[Inf[i].room]++;
                }
            }

            for (auto it : temp)
            {
                ans.push_back({it.first, it.second});
            }

            sort(ans.begin(), ans.end(), cmpind);

            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i].n)
                {
                    judge = true;
                    cout << ans[i].r << " " << ans[i].n << endl;
                }
            }

            if (!judge)
            {
                cout << "NA\n";
            }
            break;
        }
        }
    }

    system("pause");
    return 0;
}