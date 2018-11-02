#include<iostream>
using namespace std;
int main()
{
    double n;
    char s;
    double m;
    scanf("%lf %c",&n,&s);
    m=n/2+0.5;
    for(int i=1;i<=(int)m;i++)
    {
        if(i==1)
        {
            for(int j=1;j<=n;j++)
            {
                if(j==n)
                printf("%c\n",s);
                else
                printf("%c",s);
            }
        }
        else if(i==(int)m)
        {
            for(int j=1;j<=n;j++)
            {
                if(j==n)
                printf("%c\n",s);
                else
                printf("%c",s);
            }
        }
        else
        {
            printf("%c",s);
            for(int j=1;j<=n-2;j++)
            {
                printf("%c",' ');
            }
            printf("%c\n",s);
        }
    }
    system("pause");
    return 0;
}