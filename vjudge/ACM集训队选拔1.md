# ACM集训队选拔1
## A
- AC
>
```C++
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int minn[10], maxx[10], n,i,j;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d%d", &minn[i], &maxx[i]);
    }
    i=min(maxx[0],n-minn[1]-minn[2]);
    j=min(maxx[1],n-i-minn[2]);
    printf("%d %d %d\n",i,j,n-i-j);
    system("pause");
    return 0;
}
```
## B
- AC
>
```C++
#include <iostream>
using namespace std;
int main()
{
    int n, m, stu[110] = {0};
    int max, count = 0;
    int score[110][110];
    bool stt[110] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &score[i][j]);
        }
    }
    for (int j = 0; j < m; j++)
    {
        max = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < score[i][j])
            {
                max = score[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (score[i][j] == max)
            {
                if (stt[i] == 0)
                {
                    count++;
                    stt[i] = 1;
                }
            }
        }
    }
    printf("%d\n", count);
    system("pause");
    return 0;
}
```
## C
- AC
```C++
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
```
## D
- AC
```C++
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
```
## E
- AC
```C++
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
```
## F
- AC
```C++
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, l[200008], r[200008], max = 0, best = 0;
    long long on, ll=0, rr=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>l[i]>>r[i];
        ll += l[i];
        rr += r[i];
    }
    on = abs(ll - rr);
    for (int i = 1; i <= n; i++)
    {
        if (abs(ll - l[i] + r[i] - rr + r[i] - l[i])> on)
        {
            on = abs(ll - l[i] + r[i] - rr + r[i] - l[i]);
            best = i;
        }
    }
    printf("%d\n", best);
    system("pause");
    return 0;
}
```
