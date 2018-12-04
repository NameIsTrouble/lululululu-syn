/*
    水题
    想一下就知道如果配方符合要求
    那成品一定就是最佳配方
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string a,b;
        cin>>n;
        cin>>a>>b;
        int count=0,flag=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                flag=0;
                break;
            }
        }
        if(!flag)
        {
            cout<<-1<<endl;
        } 
        else
        {
            cout<<b<<endl;
        }
    }
    system("pause");
    return 0;
}