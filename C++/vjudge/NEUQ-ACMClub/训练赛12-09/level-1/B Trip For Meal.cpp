/*
    找到最短的路 一直在最短的路上走就行
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,min=0;
    cin>>a>>b>>c;
    int mm=(a>b?b:a)>c?c:(a>b?b:a);//得到最短路径
    if(n==1)//如果只吃一次 不用走路
    {
        min=0;
    }
    else
    {
        if(a==mm)//如果a或b为最短路径只需在a或b上走就行
        {
            min=(n-1)*a;
        }
        else if(b==mm)
        {
            min=(n-1)*b;
        }
        else//如果c最小 需找到a和b比较小的数 在c循环的基础上加上一次min（a，b）即可
        {
            min+=a>b?b:a;
            min+=(n-2)*mm;
        }
    }
    cout<<min<<endl;
    system("pause");
    return 0;
}