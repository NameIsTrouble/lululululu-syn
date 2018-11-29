/*
    这题其实可以用数组
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,count=1,x;
    while(cin>>n>>q&&n&&q)
    {
        vector<int>test;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            test.push_back(x);//将数据插入vector数组最后一位
        }   
        int fin[10001];//要查找的数
        sort(test.begin(),test.end());//将vector排序
        for(int i=0;i<q;i++)
        {
            cin>>fin[i];
        }
        cout<<"CASE# "<<count<<":"<<endl;
        for(int i=0;i<q;i++)
        {
            if(*lower_bound(test.begin(),test.end(),fin[i])==fin[i])//判断大于等于要查找数据的数据是否是要查找的数据
            {
                cout<<fin[i]<<" found at "<<(lower_bound(test.begin(),test.end(),fin[i])-test.begin())+1<<endl;//输出下标
            }
            else
            {
                cout<<fin[i]<<" not found\n";
            }
        }
        count++;//测试组数增加  
    }
    system("pause");
    return 0;
}