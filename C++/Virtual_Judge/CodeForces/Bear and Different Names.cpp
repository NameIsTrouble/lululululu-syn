/*
    可以把一个队列分为两部分
    第一部分有min组 每组一人
    第二部分有一组 为剩下的人
    可以令第二部分的人在队列前端 并且符合要求 即名字不同
    那么每输入一次序列情况判断 我们就要根据情况在后面增添一人 即第一部分的每个组
    那么题目中的每个序列就等于对应的组加上前面num-1个人
    如果输入NO 即至少有两人名字相同 那么我们增添的那个人的名字就必须与之前num-1个人的名字中的一个相同
    由于这时我们不知道后面序列的情况 我们就只能将增添的名字改为序列第一个人的名字
    比如sum=9 num=5 前两次输入 第一次为NO 第二次为YES 
        在输入之前 我们已经将队列的前num-1人的名字赋完
        分别为：A,B,C,D
        此时输入NO 我们判断有一人重名 那么赋完值之后的队列情况可以是
            A,B,C,D,A  A,B,C,D,B  A,B,C,D,C  A,B,C,D,D
        四种
        由于第二次输入YES
        我们判断序列中没有重名
        可以看出不论增添的人叫什么 后三种一定会有重名 比如名字为x 那么队列就变成了
            A,B,C,D,B,X  A,B,C,D,C,X  A,B,C,D,D,X 
            此时的序列情况为
            B,C,D,B,X  B,C,D,C,X  B,C,D,D,X
        因此我们只能选则第一种情况
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name[52] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "Aa", "Bb", "Cc", "Dd", "Ee", "Ff", "Gg", "Hh", "Ii", "Jj", "Kk", "Ll", "Mm", "Nn", "Oo", "Pp", "Qq", "Rr", "Ss", "Tt", "Uu", "Vv", "Ww", "Xx", "Yy", "Zz"};
    int sum, num, count = 0;
    cin >> sum >> num;//输入总长度和序列长度
    vector<string> que;
    int min = sum - num + 1;//计算总共有几个序列

    for(int i = 0; i < num - 1; i++)//将第一个序列的前num-1个人的名字赋值
    {
        que.push_back(name[count]);
        count++;
    }

    for(int i = 1; i <= min; i++)//输入min次序列情况
    {
        string a;
        cin >> a;

        if(a == "NO")//如果不行
        {
            que.push_back(que[i - 1]);//在原有名字后面增添与该序列第一个人相同的名字
        }
        else
        {
            que.push_back(name[count]);//如果可以 在后面增添不一样的名字
            count++;
        }
    }

    for(int i = 0; i < que.size(); i++)
    {
        cout << que[i] << ' ';//循环输出
    }

    cout << endl;
    system("pause");
    return 0;
}