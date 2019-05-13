/*
    水题 注意补0
*/
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

bool judge[10005];//判断是否违禁

int main()
{
    memset(judge, false, sizeof(judge));//违禁物品清零
    int N, M;
    cin >> N >> M;

    while (M--)
    {
        int a;
        cin >> a;
        judge[a] = true;//输入违禁物品
    }

    int ManNum = 0, ItemNum = 0;//违禁人数 违禁物品数

    while (N--)
    {
        string name;
        int num;
        bool vis = false;//是否违禁
        cin >> name >> num;

        while (num--)
        {
            int item;
            cin >> item;
            if (judge[item])
            {
                if (!vis)//判断是否已经输出名字
                {
                    vis = true;
                    cout << name << ":";
                }
                cout << " " << setw(4) << setfill('0') << item;//注意补0
                ItemNum++;
            }
        }

        if (vis)
        {
            ManNum++;
            cout << endl;
        }
    }

    cout << ManNum << " " << ItemNum << endl;
    system("pause");
    return 0;
}