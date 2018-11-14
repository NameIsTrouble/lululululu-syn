#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct student
{
    string id;
    int num;
    int score;
    int sum=0;
}stu[2000];
struct cc
{
    string pid;
    int psum;
}ss[2000];
bool cmp(cc a,cc b)
{
    if(a.psum==b.psum)
    {
        return a.pid<b.pid;
    }
    else
    {
        return a.psum<b.psum;
    }
}
int main()
{
    int n,m,g;
    while(scanf("%d",&n))
    {
        int score[11]={0};
        if(n==0)
        {
            break;
        }
        else
        {
            scanf("%d%d",&m,&g);
            int count=0,num=0;
            for(int i=1;i<=m;i++)
            {
                scanf("%d",&score[i]);
            }
            for(int i=0;i<n;i++)
            {
                scanf("%s%d",&stu[i].id,&stu[i].num);
                for(int j=0;j<stu[i].num;j++)
                {
                    scanf("%d",&stu[i].score);
                    stu[i].sum+=score[stu[i].score];
                  //printf("%d\n",stu[i].sum);
                }
                if(stu[i].sum>=g)
                {
                    ss[count].pid=stu[i].id;
                    ss[count].psum=stu[i].sum; 
                    count++;
                }
            }
            sort(ss,ss+count,cmp);
            printf("%d\n",count);
            for(int i=0;i<count;i++)
            {
                printf("%s %d\n",ss[i].pid,ss[i].psum);
            }
        }
    }
    system("pause");
    return 0;
}