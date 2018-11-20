#include <iostream>
#include <algorithm>
using namespace std;
struct student
{
    int grd[9];
    int num;
    int sum;
} stu[10000];
bool compare(student a, student b)
{
    if (a.sum < b.sum)
    {
        return 0;
    }
    else if (a.sum > b.sum)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            if (a.grd[i] == b.grd[i])
                continue;
            else if (a.grd[i] < b.grd[i])
            {
                return 0;
            }
            else
                return 1;
        }
        return a.num < b.num;
    }
}
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            stu[i].sum = 0;
            for (int j = 0; j < 6; j++)
            {
                cin >> stu[i].grd[j];
                stu[i].sum = stu[i].sum + stu[i].grd[j];
            }
            stu[i].num = i + 1;
        }
        sort(stu, stu + n, compare);
        for (int i = 0; i < n; i++)
        {
            cout << stu[i].num << " ";
        }
        cout << endl;
        if (n == 0)
            break;
    }
    return 0;
}