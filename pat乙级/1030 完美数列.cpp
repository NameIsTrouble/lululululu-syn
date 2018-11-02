#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N,sta=1;
    double p;
    int test[100010];
    scanf("%d%lf", &N, &p);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &test[i]);
    }
    sort(test, test + N);
    /*for(int i=N-1;i>=0;i--)
    {
        if(test[i]/test[0]<=p)
        {
            max=i+1;
            break;
        }
    }
    for(int i=0;i<N;i++)
    {
        if(test[N-1]/test[i]<=p)
        {
            if(max>N-i)
            {
                printf("%d\n",max);
                break;
            }
            else  
            {
                printf("%d\n",N-i);
                break;
            }
        }
    }*/
    for (int i=0;i<N;++i)
    {
        for(int j=i+sta-1;j<N;++j)
        {
            if (test[j]<=test[i]*p)
            {
                if(j-i+1>sta)
                {
                    sta=j-i+1;
                }
            }
            else
            {
                break;
            }
        }
    }
    printf("%d\n",sta);
    system("pause");
    return 0;
}