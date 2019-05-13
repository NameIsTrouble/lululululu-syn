#include<iostream>
using namespace std;
int main()
{
    int n,count,a[110],b[110],c[110]={0},d[110]={0};
    scanf("%d",&n);
    count=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[j]==a[i]&&i!=j&&d[i]==0)
            {
                count--;
                d[i]=1;    
            }
        }
    }
    printf("%d\n",count);
    return 0;
}