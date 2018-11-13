# ACM集训队选拔4
## A
- 
>
```C++
```
## B
- AC
>
```C++
#include<bits/stdlib.h>
using namespace std;
int main()
{
    int sum=0,a[6],flag=0;
    double ave;
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ave=sum/2;
    if(sum%2!=0)
    {
        flag=0;
    }
    else
    {
        for(int i=0;i<6;i++)
        {
            for(int j=i+1;j<6;j++)
            {
                for(int v=j+1;v<6;v++)
                {
                    if(a[i]+a[j]+a[v]==ave)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES\n";
    }
    else if(flag==0)
    {
        cout<<"NO\n";
    }
    //system("pause");
    return 0
}
```
## C
- 
>
```C++
```
## D
- AC
>
```C++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,max=-1,count_max=0,count_min=0;
    cin>>n;
    long long *a=new long long [n];
    long long min=10000000001;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int long long i=0;i<n;i++)
    {
        if(a[i]==a[0])
        {
            count_min++;
        }
        else if(a[i]==a[n-1])
        {
            count_max++;
        }
    }
    delete[] a;
    printf("%lld\n",n-count_max-count_min);
    system("pause");
    return 0;
}
```
## E
- 
>
```C++
```
## F
- AC
>
```C++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    long long n,sum_o=0,sum_j=0;
    cin>>n;
    long long *a=new long long int [n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            sum_o++;
        }
        else
        {
            sum_j++;
        }
        if(i>=1&&a[i]%2!=0&&a[i-1]%2!=0)
        {
            flag=1;
        }
    }
    if(flag!=1)
    {
        if(sum_j%2!=0)
        {
            flag=1;
        }
        else
        {
            if(sum_j==0)
            {
                flag=2;
            }
            else if(a[0]%2!=0||a[n-1]%2!=0)
            {
                flag=1;
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"First\n";
    }
    else
    {
        cout<<"Second\n";
    }
    system("pause");
    return 0;
}
```