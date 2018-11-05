#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct man
{
    string idnum, st, et;
    int sth, stm, sts, eth, etm, ets;
} per[1000];
bool cmps(man a, man b)
{
    if (a.sth == b.sth)
    {
        if (a.stm == b.stm)
        {
            return a.sts < b.sts;
        }
        else
        {
            return a.stm < b.stm;
        }
    }
    else
    {
        return a.sth < b.sth;
    }
}
bool cmpe(man a, man b)
{
    if (a.eth == b.eth)
    {
        if (a.etm == b.etm)
        {
            return a.ets > b.ets;
        }
        else
        {
            return a.etm > b.etm;
        }
    }
    else
    {
        return a.eth > b.eth;
    }
}
int main()
{
    int n;
    {
        scanf("%d", &n);
    }
    for (int j = 0; j < n; j++)
    {
        string sm, em;
        int m;
        scanf("%d", &m);
        for (int v = 0; v < m; v++)
        {
            cin >> per[v].idnum >> per[v].st >> per[v].et;
            //scanf("%s %s %s", &per[j].idnum, &per[j].st, &per[j].et);
            per[v].sth = per[v].st[0] * 10 + per[v].st[1];
            per[v].stm = per[v].st[3] * 10 + per[v].st[4];
            per[v].sts = per[v].st[6] * 10 + per[v].st[7];
            per[v].eth = per[v].et[0] * 10 + per[v].et[1];
            per[v].etm = per[v].et[3] * 10 + per[v].et[4];
            per[v].ets = per[v].et[6] * 10 + per[v].et[7];
        }
        sort(per, per + m, cmps);
        cout << per[0].idnum << ' ';
        sort(per, per + m, cmpe);
        cout << per[0].idnum << '\n';
    }
    system("pause");
    return 0;
}