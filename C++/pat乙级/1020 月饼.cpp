/*
    贪心
*/
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct node
{
    double spare, //库存
        price,    //总价格
        ratio;    //性价比
};

bool cmp(node a, node b)
{
    return a.ratio > b.ratio;
}

int N, D;

int main()
{
    cin >> N >> D;

    node moonCake[N];

    for (int i = 0; i < N; i++)
        cin >> moonCake[i].spare;

    for (int i = 0; i < N; i++)
        cin >> moonCake[i].price;

    for (auto &it : moonCake)
        it.ratio = it.price / it.spare;

    sort(moonCake, moonCake + N, cmp);

    double income = 0;

    for (auto &it : moonCake)
        if (D >= it.spare)
        {
            income += it.price;
            D -= it.spare;
        }
        else
        {
            income += D * it.ratio;
            break;
        }

    cout << fixed << setprecision(2) << income << endl;

    return 0;
}