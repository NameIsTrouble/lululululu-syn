/*
    大水题
    注意数据范围
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int x,y;
    x=n/a;
    y=m/a;
    if(a*x!=n)
    {
        x++;
    }
    if(a*y!=m)
    {
        y++;
    }
    cout<<x*y<<endl;
    system("pause");
    return 0;
}