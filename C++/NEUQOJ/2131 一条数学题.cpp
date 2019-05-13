/*
    开数组用下标表示双平方数很巧妙
    题目其实已经提示如何将结果排序
    注意数组开的大一点
*/
#include<bits/stdc++.h>
using namespace std;
int ary[1000005];
int main()
{
    int n;
    while(cin>>n)
    {
        int m,w=0;
        memset(ary,0,sizeof(ary));
        cin>>m;
        for(int i=0;i<=m;i++)
        {
            for(int j=i;j<=m;j++)
            {
                ary[i*i+j*j]=1;//如果是双平方数就判定为1
            }
        }
        for(int i=1;i<=(m*m+m*m)/(n-1);i++)//先取b
        {
            for(int j=0;j<=m*m+m*m-n+1;j++)//再取a 这样输出时就可以实现结果排序
            {
                bool flag=1;//判断数列是否符合要求
                for(int x=j;x<=j+(n-1)*i;x+=i)//依次取数列中的值
                {
                    if(!ary[x])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<j<<' '<<i<<endl;
                    w=1;//如符合则有数列符合要求，不能输出none
                }
            }
        }
        if(!w)
        {
            cout<<"NONE"<<endl;
        }
        cout<<endl;//结果后加空格
    }
    system("pause");
    return 0;
}