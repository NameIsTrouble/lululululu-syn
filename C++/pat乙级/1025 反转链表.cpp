/*
    这题要注意的是有可能有不在链表中的节点
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct node
{
    string Address, Next;
    int Data;
};

vector<node> list;
map<string, node> address;

int main()
{
    string F;
    int N, K;

    cin >> F >> N >> K;

    //将地址作为下标插入进map里
    for (int i = 0; i < N; ++i)
    {
        node temp;
        cin >> temp.Address >> temp.Data >> temp.Next;
        address[temp.Address] = temp;
    }

    //构建链表
    while (F != "-1")
    {
        list.push_back(address[F]);
        F = address[F].Next;
    }

    //反转链表
    for (int i = 0; i < list.size() / K; ++i)
        reverse(list.begin() + i * K, list.begin() + (i + 1) * K);

    for (int i = 0; i < list.size(); ++i)
        printf("%s %d %s\n", list[i].Address.c_str(), list[i].Data, (i == list.size() - 1 ? "-1" : list[i + 1].Address.c_str()));

    return 0;
}