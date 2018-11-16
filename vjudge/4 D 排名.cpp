#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct student
{
    char id[22];
    int num;
    int score;
    int flag = 0;
    int sum = 0;
} stu[2000];
bool cmp(student a, student b)
{
    if (a.sum == b.sum)
    {
        return a.id < b.id;
    }
    else
    {
        return a.sum > b.sum;
    }
}
int main()
{
    int n, m, g;
    while (scanf("%d", &n))
    {
        int score[11] = {0};
        if (n == 0)
        {
            break;
        }
        else
        {
            scanf("%d %d", &m, &g);
            int count = 0, num = 0;
            for (int i = 1; i <= m; i++)
            {
                scanf("%d", &score[i]);
            }
            for (int i = 0; i < n; i++)
            {
                stu[i].flag=0;
                stu[i].sum=0;
                scanf("%s %d", &stu[i].id, &stu[i].num);
                for (int j = 0; j < stu[i].num; j++)
                {
                    int nn;
                    scanf("%d", &nn);
                    stu[i].sum += score[nn];
                    //printf("%d\n",stu[i].sum);
                }
                if (stu[i].sum >= g)
                {
                    //ss[count].pid=stu[i].id;
                    stu[i].flag = 1;
                    //ss[count].psum=stu[i].sum;
                    count++;
                }
            }
            sort(stu, stu + n, cmp);
            printf("%d\n", count);
            for (int i = 0; i < n; i++)
            {
                if (stu[i].flag == 1)
                    printf("%s %d\n", stu[i].id, stu[i].sum);
            }
        }
    }
    system("pause");
    return 0;
}