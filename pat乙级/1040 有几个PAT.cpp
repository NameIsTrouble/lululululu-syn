#include <iostream>
using namespace std;
int main()
{
    char s[1000000];
    int count = 0,cp=0,ct=0;
    int x;
    long long int sum=0;
    for(int i=0;(x=getchar())!='\n';i++)
    {
        s[i]=x;
        if(x=='T')
        {
            ct++;
        }
        count=i;
    }
    for(int i=0;i<=count;i++)
    {
        if(s[i]=='P')
        {
            cp++;
        }
        else if(s[i]=='T')
        {
            ct--;
        }
        else
        {
            sum=(sum+(cp*ct)%1000000007)%1000000007; 
        }
    }
    //bool flag_p = 0, flag_a = 0, flag_t = 0;
    //cin >> s;
    /*int l = s.size();
    for (int i = 0; i < l - 2; i++)
    {
        if (s[i] == 'P')
        {
            for (int j = i + 1; j < l - 1; j++)
            {
                if (s[j] == 'A')
                {
                    for (int v = j + 1; v < l; v++)
                    {
                        if (s[v] == 'T')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }*/
    printf("%d", sum);
    system("pause");
    return 0;
}