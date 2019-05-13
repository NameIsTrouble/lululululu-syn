/*
    本题考察贪心算法
    要将空间最大利用
    计算如何利用最小的空间来搬运物品
    所以以bi与ai的差值从大到小排列
    同一个物体 先搬和后搬所需要的最小空间可能不同
    >判断 n 件物品是否可以搬进洞里，每件物品有实际体积 v1 和 移动时的额外体积 v2 (V1<=V2);
     分析：我们反过来想我把 n 件物品全搬进洞，需要洞的最少体积是多少？
     假设有两件物品 a（4，5）、b（6，8）先搬 a 再搬 b 则需的体积是 max(5,4+8)=12 ,反过来就是 max(8,6+5)=11
     也就是说假设两件物品时a(x1,y1)、b(x2,y2)；答案就是 min (max(y1 , x1+y2) , max(y2 , x2+y1))
     到这里就很自然的想比较 x1+y2 与 x2+y1 的大小 假设 x1+y2 > x2+y1 则 y2-x2 > y1-x1 ，于是只要先搬 b 就得到 x2+y1，
     同样如果 x1+y2 <= x2+y1 则 y2-x2 <= y1-x1 则需先搬 a；
     于是我们的贪心策略是 先搬差值大的，相等就随意！！
*/
#include <iostream>
#include <algorithm>
using namespace std;
struct item
{
    int a, b, c; //a=ai b=bi c=bi-ci
} items[1010];
bool cmp(item c, item d)
{
    return c.c > d.c;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, v, flag = 1; //flag判断是否可以搬运
        cin >> v >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> items[i].a >> items[i].b;
            items[i].c = items[i].b - items[i].a;
        }

        sort(items, items + n, cmp);

        for (int i = 0; i < n; i++)
        {
            if (v >= items[i].b) //如果剩余空间大于bi 则ith物品可搬运
            {
                v -= items[i].a; //计算剩余空间
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    system("pause");
    return 0;
}