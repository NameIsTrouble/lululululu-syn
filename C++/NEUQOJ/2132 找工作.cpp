/*
    题目有点坑
    在全为0时要输出0
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,xiuu[101];
        cin>>n;
        for(int i=n;i>=0;i--)
        {
            cin>>xiuu[i];
            xiuu[i]=xiuu[i]*i;
        }
        int flag=0,prf[101]={0},count=0,last;
        for(int i=n;i>0;i--)
        {
            if(xiuu[i]||flag)
            {
                flag=1;
                cout<<xiuu[i];
                if(i!=1)
                {
                    cout<<' ';
                }
            }
        }
        if(!flag)
        {
            cout<<'0';
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}