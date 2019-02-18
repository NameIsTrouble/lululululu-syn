/*
    注意四舍五入
    第一个平均数不需要四舍五入
*/
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int n, m, sco[10005];

/*判断是否合法*/
bool judge(int x)
{
    if (x >= 0 && x <= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        memset(sco, 0, sizeof(sco));//分数清零
        double Sft, sum = 0;
        int num = 0;
        cin >> Sft;//老师分数

        /*学生分数*/
        for (int j = 0; j < n - 1; j++)
        {
            int x;
            cin >> x;
            if (judge(x))
            {
                sum += x;
                sco[num] = x;
                num++;
            }
        }

        sort(sco, sco + num);//排序
        sum = sum - sco[0] - sco[num - 1];//去掉最高分最低分
        sum = sum / (num - 2);//取平均数 不用四舍五入
        sum += Sft;
        sum = sum / 2 + 0.5;//取总平均数 注意四舍五入
        
        cout << (int)sum << endl;//输出整数
    }

    system("pause");
    return 0;
}