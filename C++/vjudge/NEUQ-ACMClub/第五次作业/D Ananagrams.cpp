#include <bits/stdc++.h>
using namespace std;
string value(string a)//计算单词全部转为小写后的排序值
{
    string c = a;

    for (int i = 0; i < c.size(); i++)
    {
        if (isalpha(c[i]))
        {
            c[i] = tolower(a[i]);
        }
    }

    sort(c.begin(), c.end());
    return c;
}
bool cmp(const pair<string,string>&wc1,const pair<string,string>&wc2)//按照value排序
{
    return wc1.second<wc2.second;
}
int main()
{
    string test;
    map<string, string> repo;//按照输入的单词为value 全小写排序为key
    vector<pair<string,string>>WaitCmp;//待排序的应输出字符串
    while (cin >> test)
    {
        if (test == "#")//当输入#时输入结束
        {
            break;
        }

        map<string, string>::iterator it;
        it = repo.find(value(test));//判断是否存在key为输入的字符串的value的数据

        if (it != repo.end())
        {
            repo[value(test)] = "#";//如存在 将value变为“#”
        }
        else
        {
            repo[value(test)] = test;//如不存在 直接插入数据
        }
    }

    for (map<string, string>::iterator ii = repo.begin(); ii != repo.end(); ii++)
    {
        if (ii->second != "#")//将待排序的数据插入排序vector数组
        {
            WaitCmp.push_back(make_pair(ii->first,ii->second));
        }
    }
    sort(WaitCmp.begin(),WaitCmp.end(),cmp);//按照value排序
    for(vector<pair<string,string>>::iterator i=WaitCmp.begin();i!=WaitCmp.end();i++)
    {
        cout<<i->second<<endl;//循环输出
    }
    system("pause");
    return 0;
}