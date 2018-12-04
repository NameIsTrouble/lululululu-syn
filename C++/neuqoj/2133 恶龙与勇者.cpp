/*
    由于0的存在
    不能计算性价比
*/
#include <iostream>
#include <algorithm>
using namespace std;
struct wor
{
    int mon;
    int fit;
} man[100010];
bool cmp(wor a, wor b)
{
    return a.mon < b.mon;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, dor[100010] = {0};
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> dor[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> man[i].fit >> man[i].mon;
        }
        sort(dor, dor + n);//升序排龙
        sort(man, man + m, cmp);//价格升序排勇士
        long long int sum = 0, flag;
        for (int i = 0; i < n; i++)
        {
            flag = 0;//判断是否将龙杀死
            for (int j = 0; j < m; j++)
            {
                if (man[j].fit >= dor[i])
                {
                    flag = 1;
                    sum += man[j].mon;
                    break;
                }
            }
            if (!flag)//如此龙没死 王国覆灭
            {
                break;
            }
        }
        if (!flag)
        {
            cout << "Kingdom fall" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    system("pause");
    return 0;
}