/*
    广度优先搜索
*/
#include <iostream>
#include <string.h>
#include <queue>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
bool judge[200005];//判断是否可用
int step[200005];//记录步数
int main()
{
    int n, k, count;

    while (cin >> n >> k)
    {
        queue<int> test;
        memset(judge, true, sizeof(judge));
        memset(step, 0, sizeof(step));
        test.push(n);
        judge[n] = false;//标记n不可用
        count = 0;

        if (k <= n)//当k<=n时 只有-1可用
        {
            count = n - k;
        }
        else
        {
            int flag = 0, time = 0;

            while (!test.empty())//搜索
            {
                int ii = test.front();//标记头部

                if (ii == k)//如果头部为k 跳出搜索
                {
                    count = step[ii];
                    break;
                }

                if (ii - 1 >= 0 && judge[ii - 1])//如果符合条件且可用
                {
                    test.push(ii - 1);//插入序列
                    step[ii - 1] = step[ii] + 1;//步数记录
                    judge[ii - 1] = false;//标记此步不可用
                }

                if (ii + 1 <= 100000 && judge[ii + 1])//同上
                {
                    test.push(ii + 1);
                    step[ii + 1] = step[ii] + 1;
                    judge[ii + 1] = false;
                }

                if (ii * 2 >= 0 && ii * 2 <= 100000 && judge[ii * 2])
                {
                    test.push(2 * ii);
                    step[ii * 2] = step[ii] + 1;
                    judge[ii * 2] = false;
                }

                test.pop();//推出队列头部
            }
        }
        cout << count << endl;
    }

    system("pause");
    return 0;
}