/*
    本题考察贪心算法
    要将空间最大利用
    计算如何利用最小的空间来搬运物品
    所以以bi与ai的差值从大到小排列
*/
#include <iostream>
#include <algorithm>
using namespace std;
struct item
{
    int a, b,c;//a=ai b=bi c=bi-ci
} items[1010];
bool cmp(item c, item d)
{
    return c.c>d.c;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, v,flag=1;//flag判断是否可以搬运
        cin>>v>>n;
        for (int i = 0; i < n; i++)
        {
            cin >> items[i].a >> items[i].b;
            items[i].c=items[i].b-items[i].a;
        }
        sort(items, items + n, cmp);
        for (int i = 0; i < n; i++)
        {
            if (v >= items[i].b)//如果剩余空间大于bi 则ith物品可搬运
            {
                v-=items[i].a;//计算剩余空间
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    system("pause");
    return 0;
}