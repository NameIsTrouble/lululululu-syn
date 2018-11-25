/*
    尺取法 
*/
#include<bits/stdc++.h>
using namespace std;
int ti[10000001];//数组开大一点 开在主函数外 否则会超时
int main()
{
    int t, n, sum = 0;
    cin >> n >> t;

    for(int i = 0; i < n; i++)
    {
        cin >> ti[i];
    }

    int mx = 0, sta = 0;//mx为最多多少本书 sta为开始位置
    //尺取法实现
    for(int i = 0; i < n; i++)
    {
        sum += ti[i];//时间

        while(sum > t)
        {
            sum -= ti[sta];//减去开始的书
            sta++;//开始位置向后推
        }

        mx = max(mx, i - sta + 1);//取最大
    }
    //
    printf("%d", mx);
    system("pause");
    return 0;
}
/*
    好像可以用二分法做这道题
    无奈太菜
    尺取法都看不懂
*/