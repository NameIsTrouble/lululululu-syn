/*
    依照题意模拟即可
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int count = 1;
    while (cin >> t && t)
    {
        map<int, int> NumT;//标注每个人所在的队伍
        NumT.erase(NumT.begin(), NumT.end());//清空NumT

        for (int i = 1; i <= t; i++)//输入队伍
        {
            int n;
            cin >> n;
            while (n--)
            {
                int x;
                cin >> x;
                NumT[x] = i;
            }
        }
        string order;//命令
        int num;//编号
        queue<int> inl[2001];//每支队伍在队列里的人
        queue<int> oul;//出去的人
        queue<int> line;//判断那只队伍在前
        while (cin >> order)
        {
            if (order == "STOP")
            {
                break;
            }
            if (order == "ENQUEUE")
            {
                cin >> num;
                if (inl[NumT[num]].empty())//如果队列里没有该人所在队伍里的人
                {
                    line.push(NumT[num]);//将该人所在的队伍加入到队列line里
                }
                inl[NumT[num]].push(num);//在该人所在的队伍的末尾加入该人
            }
            else if (order == "DEQUEUE")
            {
                oul.push(inl[line.front()].front());//将队列的第一个人排除
                inl[line.front()].pop();//清除该人
                if (inl[line.front()].empty())//如果清除该人后该人队伍在队列里的人数为0
                {
                    line.pop();//将该队伍从line中清除
                }
            }
        }
        cout << "Scenario #" << count << endl;
        count++;
        while (!oul.empty())//循环输出
        {
            cout << oul.front() << endl;
            oul.pop();
        }
        cout<<endl;//注意格式
    }
    system("pause");
    return 0;
}