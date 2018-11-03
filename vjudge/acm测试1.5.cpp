#include<iostream>
using namespace std;
int main()
{
    int x,y,n,c;
    scanf("%d %d %d",&x,&y,&n);
    int f[7]={x-y,x,y,y-x,-x,-y};
    int i;
    i=n%6;
    while(1)
    {
        if(f[i]<0)
        {
            f[i]+=1000000007;
        }
        else
        {
            break;
        }
    }
    printf("%d\n",f[i]%1000000007);
    system("pause");
    return 0;
}