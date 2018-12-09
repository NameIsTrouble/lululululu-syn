#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int count=0,num=0,flag=1;
    do
    {
        a*=10;
        num=a/b-num*10;
        count++;
    }while(c!=num);
    if(flag)
    {
        cout<<num<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    system("pause");
    return 0;
}
