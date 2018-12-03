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
        char prf[100010];
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