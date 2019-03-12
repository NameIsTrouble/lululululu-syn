#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

struct node
{
    string ID;
    int score;
    char rank;
    int room;
    int date;
} Inf[100005];

struct dat
{
    int r;
    int n;
};

void fun1(int a, char b);
void fun2(int a, char b);
void fun3(int a, char b);
bool cmpins(const node &a, const node &b);
bool cmpind(const dat &a, const dat &b);

int N, M;

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> Inf[i].ID >> Inf[i].score;
        Inf[i].room = (Inf[i].ID[1] - '0') * 100 + (Inf[i].ID[2] - '0') * 10 + Inf[i].ID[3] - '0';
        Inf[i].date = (Inf[i].ID[4] - '0') * 100000 + (Inf[i].ID[5] - '0') * 10000 + (Inf[i].ID[6] - '0') * 1000 + (Inf[i].ID[7] - '0') * 100 + (Inf[i].ID[8] - '0') * 10 + Inf[i].ID[9] - '0';
        Inf[i].rank = Inf[i].ID[0];
    }

    for (int i = 1; i <= M; i++)
    {
        char fun;
        cin >> fun;

        switch (fun)
        {
        case '1':
            fun1(i, fun);
            break;
        case '2':
            fun2(i, fun);
            break;
        case '3':
            fun3(i, fun);
            break;
        }
    }

    system("pause");
    return 0;
}

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

bool cmpind(const dat &a, const dat &b)
{
    if (a.n == b.n)
    {
        return a.r < b.r;
    }
    else
    {
        return a.n > b.n;
    }
}

void fun1(int i, char fun)
{
    bool judge = false;
    char ch;
    cin >> ch;
    printf("Case %d: %c %c\n", i, fun, ch);
    sort(Inf, Inf + N, cmpins);

    for (int i = 0; i < N; i++)
    {
        if (Inf[i].rank == ch)
        {
            judge = true;
            cout << Inf[i].ID << " " << Inf[i].score << endl;
        }
    }

    if (!judge)
    {
        cout << "NA\n";
    }
}

void fun2(int i, char fun)
{
    bool judge = false;
    int num, n = 0, s = 0;
    cin >> num;
    printf("Case %d: %c %d\n", i, fun, num);

    for (int i = 0; i < N; i++)
    {
        if (Inf[i].room == num)
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
}

void fun3(int i, char fun)
{
    bool judge = false;
    int da;
    cin >> da;
    printf("Case %d: %c %d\n", i, fun, da);
    vector<dat> ans;
    unordered_map<int, int> temp;

    for (int i = 0; i < N; i++)
    {
        if (Inf[i].date == da)
        {
            unordered_map<int, int>::iterator it = temp.find(Inf[i].room);
            if (it == temp.end())
            {
                temp[Inf[i].room] = 0;
            }
            else
            {
                temp[Inf[i].room]++;
            }
        }
    }

    for (unordered_map<int, int>::iterator i = temp.begin(); i != temp.end(); i++)
    {
        dat t;
        t.n = i->second;
        t.r = i->first;
        ans.push_back(t);
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
}