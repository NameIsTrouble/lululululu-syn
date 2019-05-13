/*
    挺水的
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k1, k2;
    cin >> k1;
    queue<int> tom;//玩家1
    queue<int> jerry;//玩家2
    while (k1--)
    {
        int x;
        cin >> x;
        tom.push(x);
    }
    cin >> k2;
    while (k2--)
    {
        int x;
        cin >> x;
        jerry.push(x);
    }
    int winner, count = 0;
    for (int i = 0; i < 200; i++)
    {
        if (tom.front() > jerry.front())
        {
            tom.push(jerry.front());
            tom.push(tom.front());
            tom.pop();
            jerry.pop();
        }
        else if (tom.front() < jerry.front())
        {
            jerry.push(tom.front());
            jerry.push(jerry.front());
            tom.pop();
            jerry.pop();
        }
        count++;
        if (tom.empty())
        {
            winner = 2;
            break;
        }
        else if (jerry.empty())
        {
            winner = 1;
            break;
        }
    }
    if (count < 200)//如果游戏次数大于200 认为没有结果
    {
        cout << count << ' ' << winner << endl;
    }
    else
    {
        cout << "-1\n";
    }
    system("pause");
    return 0;
}