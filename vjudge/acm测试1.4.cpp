#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n, k,mint = 0,maxt = 0, t = 0,l[110],lt;
    char test[110][110];
    char tr[110];
    bool first=1,flag=0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        cin >>test[i];
        l[i]=strlen(test[i]);
    }
    cin>>tr;
    lt=strlen(tr);
    sort(l,l+n);
    for (int i = 0; i < n; i++)
    {
        t += 1;
        if(l[i]==lt&&flag==0)
        {
            mint=t;
            flag=1;
        }
        if(l[i]==lt&&l[i+1]!=lt&&flag==1)
        {
            maxt=t;
            break;
        }
        if((i+1)%k==0)
        {
            t+=5;
        }
    }
    printf("%d %d\n",mint,maxt);
    system("pause");
    return 0;
}