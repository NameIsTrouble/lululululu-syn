/*
    以名字为下标 排名为值
    如果按照普通方法遍历 可能会TLE
*/
#include <iostream>
#include <string.h>
#include <map>
#include <cmath>

using namespace std;

bool vis[10005];//判断是否已经查询过

//判断排名是否为素数
bool IsPrimer(int x)
{
    if (x == 2 || x == 3)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int N;
    cin >> N;
    memset(vis, false, sizeof(vis));//初始化为未查询
    map<string, int> temp;
    for (int i = 0; i < N; i++)
    {
        string wait;
        cin >> wait;
        temp[wait] = i + 1;//排名
    }

    int K;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        string wait;
        cin >> wait;
        map<string, int>::iterator it = temp.find(wait);
        //判断是否存在
        if (it == temp.end())
        {
            cout << wait << ": Are you kidding?\n";
        }
        else
        {
            cout << wait;
            //判断是否查询
            if (!vis[it->second])
            {
                //判断名次
                if(it->second == 1)
                {
                    cout << ": Mystery Award\n";
                }
                else
                {
                    if (IsPrimer(it->second))
                    {
                        cout << ": Minion\n";
                    }
                    else
                    {
                        cout << ": Chocolate\n";
                    }
                }
                vis[it->second] = true;//标记已查询
            }
            else
            {
                cout << ": Checked\n";
            }
        }
    }
    system("pause");
    return 0;
}