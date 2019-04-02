/*
    水题
    注意不能有前导零
*/
#include <iostream>

using namespace std;

void print(int a, int b)
{
    int ans = a * b;
    bool vis = false; //判断是否已经输出一位不为0的数

    /*循环输出*/
    while (ans)
    {
        /*当第一位不为零的数出现时 将vis设为true*/
        if (!vis && ans % 10)
        {
            cout << ans % 10;
            vis = true;
        }
        else if (vis)
            cout << ans % 10;

        ans /= 10;
    }

    cout << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;

    print(a, b);

    system("pause");
    return 0;
}