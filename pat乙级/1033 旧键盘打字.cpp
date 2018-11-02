#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int til[128] = {0};
    int wrong,scf;
    while((wrong=getchar())!='\n')
    {
        if(wrong>='a'&&wrong<'z')
        {
            til[wrong]=1;
            til[wrong-'a'+'A']=1;
        }
        else if(wrong>='A'&&wrong<='Z')
        {
            til[wrong]=1;
            til[wrong+'a'-'A']=1;
        }
        else
        {
            til[wrong]=1;
        }
    }
    if(til['+']==1)
    {
        for(int i='A';i<='Z';i++)
        {
            til[i]=1;
        }
    }
    while((scf=getchar())!='\n')
    {
        if(til[scf]==0)
        {
            printf("%c",scf);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}