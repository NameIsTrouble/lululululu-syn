#include <iostream>
using namespace std;
int main()
{
    int n, k, y, x = 0, flag = 0;
    cin >> y >> k >> n;
    int yu = y % k;//取余
    yu=k-yu;//取差
    //当差为0时 说明x最小为0
    if (yu == 0)
    {
        cout << "0 ";
        flag = 1;
        x += k;//要使可整除 直接加k
        while (x + y <= n)
        {
            cout << x << ' ';
            x += k;
        }
        cout << endl;
    }
    else
    {
        if (y + yu <= n)
        {
            cout << yu << ' ';
            x = yu+k;
            while (x + y <= n)
            {
                cout << x << ' ';
                x += k;
            }
            flag = 1;
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
            system("pause");
            return 0;
        }
    }
    system("pause");
    return 0;
}