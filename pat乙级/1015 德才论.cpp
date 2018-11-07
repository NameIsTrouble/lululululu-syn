#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct student
{
    int idnum, ds, cs, lev = 0;
} stu[100010];
bool cmp(student a, student b)
{
    if (a.ds + a.cs == b.ds + b.cs)
    {
        if (a.ds == b.ds)
        {
            return a.idnum < b.idnum;
        }
        else
        {
            return a.ds > b.ds;
        }
    }
    else
    {
        return (a.ds + a.cs) > (b.cs + b.ds);
    }
}
int main()
{
    int n, l, h, lev[100010] = {0}, count = 0;
    scanf("%d%d%d", &n, &l, &h);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &stu[i].idnum, &stu[i].ds, &stu[i].cs);
        if (stu[i].cs >= h && stu[i].ds >= h)
        {
            stu[i].lev = 1;
            count++;
        }
        else if (stu[i].ds >= h && stu[i].cs < h && stu[i].cs >= l)
        {
            stu[i].lev = 2;
            count++;
        }
        else if (stu[i].cs < h && stu[i].ds < h && stu[i].ds >= stu[i].cs && stu[i].cs >= l && stu[i].ds >= l)
        {
            stu[i].lev = 3;
            count++;
        }
        else if (stu[i].ds >= l && stu[i].cs >= l)
        {
            count++;
            stu[i].lev = 4;
        }
    }
    sort(stu, stu + n, cmp);
    printf("%d\n", count);
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (stu[j].lev == i)
                printf("%d %d %d\n", stu[j].idnum, stu[j].ds, stu[j].cs);
        }
    }
    system("pause");
    return 0;
}