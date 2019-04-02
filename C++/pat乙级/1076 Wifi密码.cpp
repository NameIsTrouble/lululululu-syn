/*
    水题
*/
#include <iostream>
#include <queue>

using namespace std;

queue<int> ans;

int main()
{
    int n;
    cin >> n;
    n *= 4;

    while (n--)
    {
        string a;
        cin >> a;
        if (a[2] == 'T') //判断是否正确
            switch (a[0])
            {
            case 'A':
                ans.push(1);
                break;
            case 'B':
                ans.push(2);
                break;
            case 'C':
                ans.push(3);
                break;
            case 'D':
                ans.push(4);
                break;
            }
    }

    while (!ans.empty()) //遍历输出
    {
        cout << ans.front();
        ans.pop();
    }

    cout << endl;

    system("pause");
    return 0;
}