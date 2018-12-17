/*
    按题意模拟即可
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> blo[26]; //定义每个堆
int n;
//计算所需物体的高度
int height(int pos, int a)
{
    for (int i = 0; i < blo[pos].size(); i++)
    {
        if (blo[pos][i] == a)
        {
            return i;
        }
    }
} 
//查找所需物体所在的堆
int find(int a)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < blo[i].size(); j++)
        {
            if (blo[i][j] == a)
            {
                return i;
            }
        }
    }
} 
//初始化每个堆 每个堆只有一个跟这个堆编号相同的元素 其余的元素为-1
void ini()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!j)
            {
                blo[i].push_back(i);
            }
            else
            {
                blo[i].push_back(-1);
            }
        }
    }
} 
//将所需物体上方的所有物体返回到一开始的位置
void inimove(int h, int pos)
{
    for (int i = h + 1; i < blo[pos].size(); i++)
    {
        if (blo[pos][i] != -1)//如果某个数值为-1 则跳过
        {
            blo[blo[pos][i]][0] = blo[pos][i];
            blo[pos][i] = -1;
        }
    }
}
//将a及a上方的物体移到b所在的堆
void move(int h1, int poss, int pose)
{
    for (int i = h1; i < blo[poss].size(); i++)
    {
        if (blo[poss][i] != -1)//如果某个数值为-1 则跳过
        {
            blo[pose].push_back(blo[poss][i]);
            blo[poss][i] = -1;
        }
    }
}
int main()
{
    cin >> n;
    ini();
    string a, b;
    int sta, en;
    while (cin >> a)
    {
        if (a == "quit")
        {
            break;
        }
        cin >> sta >> b >> en;
        int PosSta = find(sta), PosEn = find(en);//得到要移动的a和移动到的b的堆位置
        if (PosSta == PosEn || sta == en)//如果所在堆相同或两个物体相同 则跳过
        {
            continue;
        }
        int HSta = height(PosSta, sta), HEn = height(PosEn, en);//获取a和b在其堆里的高度
        //开始模拟
        if (a == "move" && b == "onto")
        {
            inimove(HSta, PosSta);
            inimove(HEn, PosEn);
            move(HSta, PosSta, PosEn);
        }
        else if (a == "move" && b == "over")
        {
            inimove(HSta, PosSta);
            move(HSta, PosSta, PosEn);
        }
        else if (a == "pile" && b == "onto")
        {
            inimove(HEn, PosEn);
            move(HSta, PosSta, PosEn);
        }
        else if (a == "pile" && b == "over")
        {
            move(HSta, PosSta, PosEn);
        }
    }
    for (int i = 0; i < n; i++)//循环输出
    {
        cout << i << ":";
        for (int j = 0; j < blo[i].size(); j++)
        {
            if (blo[i][j] != -1)//遇到-1则跳过
            {
                cout << " " << blo[i][j];
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}