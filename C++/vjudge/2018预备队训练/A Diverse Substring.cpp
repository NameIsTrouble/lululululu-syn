/*
    水题
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0, adress;
    scanf("%d", &n);
    string test;
    cin >> test;
    //判断是否有连续两个字符互不相同
    for (int i = 0; i < n - 1; i++)
    {
        if (test[i] != test[i + 1])
        {
            flag = 1;//存在
            adress = i;//记录下标
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl << test[adress] << test[adress + 1] << endl;
    }
    else
        printf("NO\n");
    system("pause");
    return 0;
}
