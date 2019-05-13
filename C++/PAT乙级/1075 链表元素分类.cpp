/*
    详见1025 反转链表
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct node
{
    string adress, nex;
    int data;
} temp[100005];

map<string, node> lis;
vector<node> ans, mid;

int main()
{
    string fir;
    int N, K;
    cin >> fir >> N >> K;

    for (int i = 0; i < N; ++i)
    {
        cin >> temp[i].adress >> temp[i].data >> temp[i].nex;
        lis[temp[i].adress] = temp[i];
    }

    while (fir != "-1")
    {
        map<string, node>::iterator it = lis.find(fir);
        if (it != lis.end())
        {
            mid.push_back(it->second);
            fir = it->second.nex;
        }
    }

    for (int i = 0; i < mid.size(); ++i)
        if (mid[i].data < 0)
            ans.push_back(mid[i]);

    for (int i = 0; i < mid.size(); ++i)
        if (mid[i].data >= 0 && mid[i].data <= K)
            ans.push_back(mid[i]);

    for (int i = 0; i < mid.size(); ++i)
        if (mid[i].data > K)
            ans.push_back(mid[i]);

    for (int i = 0; i < ans.size(); ++i)
    {
        if (i != ans.size() - 1)
            ans[i].nex = ans[i + 1].adress;
        else
            ans[i].nex = "-1";

        printf("%s %d %s\n", ans[i].adress.c_str(), ans[i].data, ans[i].nex.c_str());
    }

    system("pause");
    return 0;
}