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