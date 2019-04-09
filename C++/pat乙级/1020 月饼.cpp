/*
    贪心
*/
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

/*定义结构体*/
struct node
{
    double spare, //库存
        price, //总价格
        ratio; //性价比
} moonCake[2020];

bool cmp(node a, node b)
{
    return a.ratio > b.ratio;
}

int N, D;

int main()
{
    cin >> N >> D;

    for (int i = 0; i < N; i++)
        cin >> moonCake[i].spare;

    for (int i = 0; i < N; i++)
        cin >> moonCake[i].price;

    /*计算性价比*/
    for (int i = 0; i < N; i++)
        moonCake[i].ratio = moonCake[i].price / moonCake[i].spare;

    sort(moonCake, moonCake + N, cmp);

    double income = 0;

    for (int i = 0; i < N; i++)
        if (D >= moonCake[i].spare)
        {
            income += moonCake[i].price;
            D -= moonCake[i].spare;
        }
        else
        {
            income += D * moonCake[i].ratio;
            break;
        }

    cout << fixed << setprecision(2) << income << endl;

    return 0;
}