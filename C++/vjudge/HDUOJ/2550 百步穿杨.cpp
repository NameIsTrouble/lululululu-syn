#include<iostream>
#include<algorithm>
using namespace std;
struct arow
{
    int num,len;
}ar[55];
bool cmp(arow a,arow b)
{
    return a.len<b.len;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,num[10000];
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d %d",&ar[j].len,&ar[j].num);
        }
        sort(ar,ar+n,cmp);
        /*-for(int j=0;j<n;j++)
        {
            printf("%d %d\n",ar[j].len,ar[j].num);
        }*/
        for(int j=0;j<n;j++)
        {
            for(int v=0;v<ar[j].num;v++)
            {
                printf(">+");
                for(int z=0;z<ar[j].len-2;z++)
                {
                    printf("-");
                }
                printf("+>\n");
            }
            printf("\n");
            if(j==n-1)
            {
                break;
            }
           /* else
            {
                printf("\n");
            }*/
        }
    }
    system("pause");
    return 0;
}