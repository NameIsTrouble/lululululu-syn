/*
    这题要注意单词间的特殊符号可能是分隔两个单词的标记
    所以要将特殊符号两端分开
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string test;
    set<string> dir;//创建字典集合
    while (cin>>test)
    {
        string ins;
        //将大写字母转为小写字母 特殊字符转为空格
        for (int i = 0; i < test.size(); i++)
        {
            if(isalpha(test[i]))
            {
                test[i] = tolower(test[i]);
            }
            else
            {
                test[i]=' ';
            }
        }
        stringstream ss(test);//将test放入string流
        while(ss>>ins)//将空格两端分开
        {
            dir.insert(ins);//录入字典
        }
        //memset(ins,0,sizeof(ins)/sizeof(char));
    }
    set<string>::iterator it;//迭代
    for(it=dir.begin();it!=dir.end();it++)
    {
        cout<<*it<<endl;
    }
    system("pause");
    return 0;
}