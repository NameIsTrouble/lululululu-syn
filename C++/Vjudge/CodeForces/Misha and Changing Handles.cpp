/*
    直接覆盖指定key的值即可
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string> user;
    int q;
    cin >> q;
    while (q--)
    {
        string a, b;
        cin >> a >> b;
        map<string, string>::iterator it;
        int flag=1;
        for(it=user.begin();it!=user.end();it++)
        {
            if(it->second==a)//如果找到key的value=a
            {
                it->second=b;//将value改为b
                flag=0;
                break;
            }
        }
        if(flag)
        {
            user[a]=b;//否则直接插入数据
        }
    }
    cout<<user.size()<<endl;//输出元素个数
    map<string,string>::iterator ii;
    for(ii=user.begin();ii!=user.end();ii++)//遍历输出
    {
        cout<<ii->first<<" "<<ii->second<<endl;
    }
    system("pause");
    return 0;
}