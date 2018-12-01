#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct student
{
    string id; //学号
    int sum;   //总成绩
};
bool cmp(student a, student b)
{
    if (a.sum > b.sum)
    {
        return true;
    }
    else if (a.sum == b.sum && a.id < b.id)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, m, g;
    int score[11]; //每题分值
    student stu[2000];
    while (scanf("%d", &n)) //n考生人数
    {
        if (n == 0)
        {
            break;
        }
        scanf("%d %d", &m, &g); //m考题数 g及格线
        int count = 0;          //及格人数
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &score[i]);
        }
        int num; //答题数
        int nn;  //答对题目的题号
        for (int i = 0; i < n; i++)
        {
            cin >> stu[i].id;
            scanf("%d", &num);
            stu[i].sum = 0;
            for (int j = 0; j < num; j++)
            {
                scanf("%d", &nn);
                stu[i].sum += score[nn];
            }
        }
        sort(stu, stu + n, cmp);
        for (int i = 0; i < n; i++)
        {
            if (stu[i].sum >= g)
            {
                count++;
            }
        }
        printf("%d\n", count);
        for (int i = 0; i < n; i++)
        {
            if (stu[i].sum >= g)
                cout << stu[i].id << ' ' << stu[i].sum << endl;
        }
    }
    system("pause");
    return 0;
}