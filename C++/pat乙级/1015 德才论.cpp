#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student
{
    int idnum, ds, cs, lev;
} stu[100010];

bool cmp(student a, student b)
{
    if (a.ds + a.cs == b.ds + b.cs)
        if (a.ds == b.ds)
            return a.idnum < b.idnum;
        else
            return a.ds > b.ds;
    else
        return (a.ds + a.cs) > (b.cs + b.ds);
}

int main()
{
    int n, l, h, lev[100010] = {0}, cnt = 0;
    scanf("%d%d%d", &n, &l, &h);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &stu[i].idnum, &stu[i].ds, &stu[i].cs);
        if (stu[i].cs >= h && stu[i].ds >= h)
        {
            stu[i].lev = 1;
            cnt++;
        }
        else if (stu[i].ds >= h && stu[i].cs < h && stu[i].cs >= l)
        {
            stu[i].lev = 2;
            cnt++;
        }
        else if (stu[i].cs < h && stu[i].ds < h && stu[i].ds >= stu[i].cs && stu[i].cs >= l && stu[i].ds >= l)
        {
            stu[i].lev = 3;
            cnt++;
        }
        else if (stu[i].ds >= l && stu[i].cs >= l)
        {
            cnt++;
            stu[i].lev = 4;
        }
    }

    sort(stu, stu + n, cmp);

    cout << cnt << endl;

    for (int i = 1; i < 5; i++)
        for (auto &it : stu)
            if (it.lev == i)
                cout << it.idnum << " " << it.ds << " " << it.cs << endl;

    return 0;
}