#include<iostream>
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
    return 0;
}