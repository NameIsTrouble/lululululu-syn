#include <iostream>
#include<algorithm>
using namespace std;
struct time
{
    int s,e;
}test[110];
bool cmp(time a,time b)
{
    if(a.e==b.e)
    {
        return a.s>b.s;
    }
    else
    {
        return a.e<b.e;
    }
}
int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        //int it[110][3], exc1, exc2, exc3;
        // bool flag[110] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &test[i].s, &test[i].e);
        }
        /*for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (it[i][1] == it[j][0])
                {
                    flag[j] = 1;
                }
            }
        }*/
        sort(test,test+n,cmp);
        /*for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (it[j][1] > it[i][1])
                {
                    exc1 = it[j][0];
                    it[j][0] = it[i][0];
                    it[i][0] = exc1;
                    exc2 = it[j][1];
                    it[j][1] = it[i][1];
                    it[i][1] = exc2;
                    exc3=flag[j];
                    flag[j]=flag[i];
                    flag[i]=exc3;
                }
                else if (it[j][1] == it[i][1])
                {
                    if (it[j][0] < it[i][0])
                    {
                        exc1 = it[j][0];
                        it[j][0] = it[i][0];
                        it[i][0] = exc1;
                        exc2 = it[j][1];
                        it[j][1] = it[i][1];
                        it[i][1] = exc2;
                    }
                }
            }
        }*/
        /*for(int i=0;i<n;i++)
        {
            cout<<it[i][0]<<' '<<it[i][1]<<endl;
        }*/
        //int i = 0, max = 0;
        int count = 1, exa1 = test[0].e, exa2;
        /*if (flag[i] == 1)
            {
                continue;
            }
            //此循环有问题 当第一个节目后面的多个节目有多个分支时无法记录
            for (int j = 0; j < n; j++)
            {
                exa2 = it[j][0];
                if (it[j][0] < exa1)
                {
                    continue;
                }
                else
                {
                    count++;
                    exa1 = it[j][1];
                }
            }
            //end
            if (max < count)
            {
                max = count;
            }*/
        /*for (int i = 1, t = it[0][1], count = 1; i < n; i++) //如果开始 的时间比他这个结束的时间迟，则就k++
        {
            if (it[i][0] >= t) //说明这个电视你能够看
            {
                t = it[i][1];
                count++;
            }
        }*/
        for (int j = 1; j < n; j++)
        {
            if (test[j].s >= exa1)
            {
                count++;
                exa1 = test[j].e;
            }
            /*else if (test[j].e < exa1)
            {
                exa1 = it[j][1];
            }*/
        }
        printf("%d\n", count);
    }
    system("pause");
    return 0;
}