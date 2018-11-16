#include<iostream>
#include<algorithm>
bool cmp(char a[],char b[])
{
    return a<b;
}
using namespace std;
int main()
{
    string test;
    char prf[1000][1000];
    scanf("%s",&test);
    int l=test.size(),p=0,countfir=0,countsec=0,first=1,sum=0;
    for(int i=0;i<l;i++)
    {
        if(test[i]=='5')
        {
            countfir++;
            countsec=0;
            first=1;
        }
        else if(first==1&&test[i]=='0')
        {
            first=0;
            continue;
        }
        else
        {
            prf[countfir][countsec]=test[i];
        }
    }
    if(first==1)
    {
        sum=countfir+1;
    }
    else
    {
        sum=countfir;
    }
    sort(prf,prf+sum,cmp);
    for(int i=0;i<sum;i++)
    {
        printf("%s",prf[i]);
        if(i==sum-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}