/*
    暴力解法一定会tle
    主要思路就是打表+前缀和
*/
#include<iostream>
using namespace std;
#define MAXN 2000005
int ForeSum[MAXN][10];//前缀和 ForeSum[n][m]表示从1到n值为m的个数
int n;
int f(int n)//计算f（n）
{
        int ans = 1, flag;
        while(n)
        {
            flag = n % 10;

            if(flag)//跳过0
            {
                ans *= flag;
            }

            n /= 10;
        }
        return ans;
}
void create()// 打表
{   
    for(int i=1;i<=MAXN;i++)
    {
        int x=f(i);
        while(x>=10)//得到最终值
        {
            x=f(x);
        }
        ForeSum[i][x]++;//记录f（i）的值
    }
}
int main()
{
    create();//打表
    for(int i=1;i<10;i++)
    {
        for(int j=2;j<=MAXN;j++)
        {
            ForeSum[j][i]+=ForeSum[j-1][i];//累加得到前缀和
        }
    }
    int l, r, k;
    cin >> n;

    while(n--)
    {
        cin >> l >> r >> k;
        int count = ForeSum[r][k]-ForeSum[l-1][k];//得到从l到r值为k的个数
        printf("%d\n", count);
    }

    system("pause");
    return 0;
}