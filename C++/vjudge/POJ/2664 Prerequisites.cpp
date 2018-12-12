/*
    用set来判断是否满足一个类
    用cin会超时
*/
#include <iostream>
#include<set>
using namespace std;
int main()
{
    int k;
    while (scanf("%d",&k) && k)//选了几门课
    {
        int m;
        scanf("%d",&m);//类的数量
        bool flag = 1;//判断此人是否通过
        int cso[1000];
        for (int i = 0; i < k; i++)
        {
            scanf("%d",&cso[i]);//输入选的课的序号
        }
        for (int i = 0; i < m; i++)
        {
            int c, r;
            scanf("%d%d",&c,&r);//输入每一个类的课的数量和应选数量
            set<int> shou;//创建类的课的集合
            int x;
            for (int j = 0; j < c; j++)
            {
                scanf("%d",&x);//输入每个类里面的课的序号
                shou.insert(x);//插入集合
            }
            if (flag)//判断是否已经失败 如失败不需执行以下步骤
            {
                for (int j = 0; j < k; j++)
                {
                    shou.insert(cso[j]);//在集合中插入已选的课
                }
                if (c + k - r < shou.size())//如果已选的课和类里的课的重复值不满足要求 即类的课总和与已选课的和加起来小于最少应选的课加上集合的元素个数 失败
                {
                    flag = 0;
                }
                shou.clear();//清除集合
            }
        }
        if (!flag)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    system("pause");
    return 0;
}