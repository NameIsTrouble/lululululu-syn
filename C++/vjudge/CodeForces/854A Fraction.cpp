/*
    其实这题写复杂了
    只要根据奇偶数来找互质数就好了
    用不着循环
*/
#include<iostream>
#include<cmath>
using namespace std;
//判断是否互质 辗转相除法
bool isprimer(int n, int m)
{
    int infor;

    while (1)
    {
        infor = n % m; //取余
        n = m; //记录除数

        if (!infor)//当余数为0时 跳出
        {
            break;
        }

        m = infor;//记录余数
    }

    if(m == 1)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;

    if(n % 2 == 0)
    {
        for(int i = n / 2 - 1; i >= 1; i--)
        {
            if(isprimer(n - i, i))
            {
                printf("%d %d\n", i, n - i);
                system("pause");
                return 0;
            }
        }
    }
    else
    {
        for(int i = n / 2; i >= 1; i++)
        {
            if(isprimer(n - i, i))
            {
                printf("%d %d\n", i, n - i);
                system("pause");
                return 0;
            }
        }
    }

    return 0;
}