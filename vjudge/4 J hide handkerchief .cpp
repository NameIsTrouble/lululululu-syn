/*
    题目贼鸡儿难受
    其实就是n个人围成的圈从一个人开始每隔m-1个人查看一次
    能不能查看完
    也就是求最大公因数
*/
//辗转相除法  for求公因数会超时
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m && n != -1 && m != -1)
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
        if (m == 1)//当最大公因数为1时输出yes
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "POOR Haha" << endl;
        }
    }
    system("pause");
    return 0;
}