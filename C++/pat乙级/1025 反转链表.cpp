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
} lis[100005];

vector<node> mid;
map<string, node> temp;

int main()
{
    ios::sync_with_stdio(false); //取消流同步
    string f;
    int N, K;
    cin >> f >> N >> K;

    //将地址作为下标插入进map里
    for (int i = 0; i < N; ++i)
    {
        cin >> lis[i].Address >> lis[i].Data >> lis[i].Next;
        temp[lis[i].Address] = lis[i];
    }

    //构建链表
    while (f != "-1")
    {
        map<string, node>::iterator it = temp.find(f);
        if (it != temp.end())
        {
            mid.push_back(it->second);
            f = it->second.Next;
        }
    }

    int x = mid.size() / K; //这里注意mid.size()有可能比N小

    //反转链表
    for (int i = 0; i < x; ++i)
        reverse(mid.begin() + (i * K), mid.begin() + (i * K) + K);

    //构建翻转后的链表
    for (int i = 0; i < mid.size(); ++i)
    {
        if (i != mid.size() - 1)
            mid[i].Next = mid[i + 1].Address;
        else
            mid[i].Next = "-1";

        printf("%s %d %s\n", mid[i].Address.c_str(), mid[i].Data, mid[i].Next.c_str());
    }

    system("pause");
    return 0;
}