#include<iostream>
#include<algorithm>
using namespace std;
struct rice
{
    double singel,wei;
}test[1010];
bool cmp(rice a,rice b)
{
    return a.singel<b.singel;
}
int main()
{
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
        int n,m;
        double sum=0;
        scanf("%d %d",&n,&m);
        for(int j=0;j<m;j++)
        {
            scanf("%lf %lf",&test[j].singel,&test[j].wei);
        }
        sort(test,test+m,cmp);
        for(int j=0;j<m;j++)
        {
            if(n>=test[j].singel*test[j].wei)
            {
                sum+=test[j].wei;
                n-=test[j].singel*test[j].wei;
            }
            else
            {
                sum+=double(n/test[j].singel);
                break;
            }
        }
        printf("%.2lf\n",sum);
    }
    system("pause");
    return 0;
}