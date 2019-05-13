/*
    水题
*/
#include<bits/stdc++.h>
using namespace std;
#define a 1
#define b 2
#define c 3
#define d 4
#define e 5
#define f 6
#define g 7
#define h 8
int main()
{
    string s,t;
    cin>>s>>t;
    int x=s[0]-t[0];
    int y=s[1]-t[1];
    printf("%d\n",max(abs(x),abs(y)));
    if(x>=0&&y>=0)
    {
        if(abs(x)>abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("LD\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("L\n");
            }
        }
        else if(abs(x)<abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("LD\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("D\n");
            }
        }
        else
        {
            for(int i=0;i<abs(x);i++)
            {
                printf("LD\n");
            }
        }
    }
    else if(x>=0&&y<0)
    {
        if(abs(x)>abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("LU\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("L\n");
            }
        }
        else if(abs(x)<abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("LU\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("U\n");
            }
        }
        else
        {
            for(int i=0;i<abs(x);i++)
            {
                printf("LU\n");
            }
        }
    }
    else if(x<0&&y>=0)
    {
        if(abs(x)>abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("RD\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("R\n");
            }
        }
        else if(abs(x)<abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("RD\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("D\n");
            }
        }
        else
        {
            for(int i=0;i<abs(x);i++)
            {
                printf("RD\n");
            }
        }
    }
    else
    {
        if(abs(x)>abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("RU\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("R\n");
            }
        }
        else if(abs(x)<abs(y))
        {
            for(int i=0;i<min(abs(x),abs(y));i++)
            {
                printf("RU\n");
            }
            for(int i=0;i<max(abs(x),abs(y))-min(abs(x),abs(y));i++)
            {
                printf("U\n");
            }
        }
        else
        {
            for(int i=0;i<abs(x);i++)
            {
                printf("RU\n");
            }
        }
    }
    system("pause");
    return 0;
}