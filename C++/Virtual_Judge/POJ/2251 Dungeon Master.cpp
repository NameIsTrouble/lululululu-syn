/*
    广度优先搜索
*/
#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
#define Max 31
//定义结构体
struct mine
{
    int InMartix[Max][Max][Max];
    bool JudgeMartix[Max][Max][Max];
    int StepMartix[Max][Max][Max];
    int si, sj, sz;
};
int main()
{
    int l, r, c;
    while (cin >> l >> r >> c && (l != 0 && r != 0 && c != 0))
    {
        mine test;
        queue<int> line;//标记坐标的队列
        memset(test.JudgeMartix, true, sizeof(test.JudgeMartix));//令所有位置判断为不能使用
        memset(test.StepMartix, 0, sizeof(test.StepMartix));//令所有位置的时间为0
        //输入迷宫
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < r; j++)
            {
                for (int z = 0; z < c; z++)
                {
                    char x;
                    cin >> x;
                    if (x == 'S')//当该位置为起始点时
                    {
                        test.InMartix[i][j][z] = 2;//将迷宫矩阵标为2
                        test.JudgeMartix[i][j][z] = false;//位置标为不能走
                        test.StepMartix[i][j][z] = 0;//时间标0
                        test.sj = j;//记录坐标
                        test.sz = z;
                        test.si = i;
                    }
                    else if (x == '.')//当为可使用位置时
                    {
                        test.InMartix[i][j][z] = 1;//迷宫矩阵标1
                    }
                    else if (x == '#')//当为不可走时
                    {
                        test.InMartix[i][j][z] = 0;//迷宫矩阵标0
                        test.JudgeMartix[i][j][z] = false;//位置标为不可使用
                    }
                    else if (x == 'E')//当为终点时
                    {
                        test.InMartix[i][j][z] = 3;//迷宫矩阵标3
                    }
                }
            }
        }
        line.push(test.si);//将起始位置坐标插入队列
        line.push(test.sj);
        line.push(test.sz);
        bool flag = false;//判断是否可走出
        int num;
        while (!line.empty())//当队列不为空时
        {
            int i = line.front();//获取坐标并弹出第一个位置的坐标
            line.pop();
            int j = line.front();
            line.pop();
            int z = line.front();
            line.pop();
            if (test.InMartix[i][j][z] == 3)//如果到达终点 结束循环
            {
                flag = true;
                num = test.StepMartix[i][j][z];
                break;
            }
            //上下位置的改变
            if (test.JudgeMartix[i - 1][j][z] && i - 1 >= 0)//
            {
                test.StepMartix[i - 1][j][z] = test.StepMartix[i][j][z] + 1;//时间记录
                test.JudgeMartix[i - 1][j][z] = false;//位置标为不可用
                line.push(i - 1);//记录坐标
                line.push(j);
                line.push(z);
            }
            if (test.JudgeMartix[i + 1][j][z] && i + 1 < l)
            {
                test.StepMartix[i + 1][j][z] = test.StepMartix[i][j][z] + 1;
                test.JudgeMartix[i + 1][j][z] = false;
                line.push(i + 1);
                line.push(j);
                line.push(z);
            }
            //前后位置的改变
            if (test.JudgeMartix[i][j - 1][z] && j - 1 >= 0)
            {
                test.StepMartix[i][j - 1][z] = test.StepMartix[i][j][z] + 1;
                test.JudgeMartix[i][j - 1][z] = false;
                line.push(i);
                line.push(j - 1);
                line.push(z);
            }
            if (test.JudgeMartix[i][j + 1][z] && j + 1 < r)
            {
                test.StepMartix[i][j + 1][z] = test.StepMartix[i][j][z] + 1;
                test.JudgeMartix[i][j + 1][z] = false;
                line.push(i);
                line.push(j + 1);
                line.push(z);
            }
            //左右位置的改变
            if (test.JudgeMartix[i][j][z - 1] && z - 1 >= 0)
            {
                test.StepMartix[i][j][z - 1] = test.StepMartix[i][j][z] + 1;
                test.JudgeMartix[i][j][z - 1] = false;
                line.push(i);
                line.push(j);
                line.push(z - 1);
            }
            if (test.JudgeMartix[i][j][z + 1] && z + 1 < c)
            {
                test.StepMartix[i][j][z + 1] = test.StepMartix[i][j][z] + 1;
                test.JudgeMartix[i][j][z + 1] = false;
                line.push(i);
                line.push(j);
                line.push(z + 1);
            }
        }
        if (flag)
        {
            cout << "Escaped in " << num << " minute(s)." << endl;
        }
        else
        {
            cout << "Trapped!\n";
        }
    }
    system("pause");
    return 0;
}