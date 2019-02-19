#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

struct node
{
    int BScore, AScore, TScore, TotalScore, Num, Rank;
    string school;
};

map<string, node> list;
vector<node> ans;

string ToLowerCase(string a)
{
    string lower;

    for (int i = 0; i < a.size(); i++)
    {
        if (isupper(a[i]))
        {
            lower[i] = tolower(a[i]);
        }
        else
        {
            lower[i] = a[i];
        }
    }

    lower[a.size()] = '\0';
    return lower;
}

bool cmp(node a, node b)
{
    if (a.TotalScore == b.TotalScore)
    {
        if (a.Num == b.Num)
        {
            return a.school < b.school;
        }
        else
        {
            return a.Num < b.Num;
        }
    }
    else
    {
        return a.TotalScore > b.TotalScore;
    }
}

int main()
{
    int n, ns = 0;
    cin >> n;
    while (n--)
    {
        string id, col;
        int sco;
        cin >> id >> sco >> col;
        string sco = ToLowerCase(col);
        cout << sco << endl;

        if (list.find(col) == list.end())
        {
            ns++;
            list[col].TotalScore = 0;
            list[col].AScore = 0;
            list[col].BScore = 0;
            list[col].Num = 0;
            list[col].TScore = 0;
            list[col].school = col;
        }

        switch (id[0])
        {
        case 'A':
            list[col].AScore += sco;
            break;
        case 'B':
            list[col].BScore += sco;
            break;
        case 'T':
            list[col].TScore += sco;
            break;
        }

        list[col].Num++;
    }

    for (map<string, node>::iterator i = list.begin(); i != list.end(); i++)
    {
        i->second.TotalScore = i->second.AScore + i->second.BScore / 1.5 + i->second.TScore * 1.5;
        ans.push_back(i->second);
        cout << i->second.TotalScore << endl;
    }

    sort(ans.begin(), ans.end(), cmp);
    ans[0].Rank = 1;
    cout << ns << endl;

    for (int i = 0; i < ns; i++)
    {
        if (!i)
        {
            cout << ans[i].Rank << " " << ans[i].school << " " << ans[i].TotalScore << " " << ans[i].Num << endl; 
        }
        else
        {
            if (ans[i].TotalScore == ans[i - 1].TotalScore)
            {
                ans[i].Rank = ans[i - 1].Rank;
                cout << ans[i].Rank << " " << ans[i].school << " " << ans[i].TotalScore << " " << ans[i].Num << endl;
            }
            else
            {
                ans[i].Rank = i + 1;
                cout << ans[i].Rank << " " << ans[i].school << " " << ans[i].TotalScore << " " << ans[i].Num << endl;
            }
            
        }
    }

    system("pause");
    return 0;
}