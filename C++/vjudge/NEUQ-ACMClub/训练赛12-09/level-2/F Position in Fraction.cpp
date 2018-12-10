/*
    模拟除法即可
    由于精度问题 不能直接提取小数
    要把小数转为整数 取个位
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,exc,flag=1,count=0;
    cin>>a>>b>>c;
    do
    {
        a*=10;//a乘以十以取得个位小数
        exc=a/b;//取整数
        a%=b;//a取余
        count++;//位数增加
        //cout<<exc<<' '<<mid<<endl;
        if(count>1000)//当位数大于1000时 我们认为不存在
        {
            flag=0;
            break;
        }
    }while(c!=exc);
    if(flag)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<"-1\n";
    }
    system("pause");
    return 0;
}