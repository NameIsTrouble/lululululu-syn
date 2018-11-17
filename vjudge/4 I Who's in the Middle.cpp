/*
    简单的排序
    多组输入把我害惨了
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, cow[10010];
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> cow[i];
        }
        sort(cow, cow + n);
        cout << cow[(n - 1) / 2] << endl;
    }
    system("pause");
    return 0;
}