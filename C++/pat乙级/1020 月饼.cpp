/*
    贪心
*/

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct MoonCake
{
    double spare;//库存
    double price;//总价格
    double ratio;//性价比
} temp[2020];

/*定义结构体*/
bool cmp(MoonCake a, MoonCake b)
{
    return a.ratio > b.ratio;
}

int N, D;

int main()
{
    cin >> N >> D;

    for (int i = 0; i < N; i++)
    {
        cin >> temp[i].spare;
    }

    for (int i = 0; i < N; i++)
    {
        cin >> temp[i].price;
    }
    /*计算结构体*/
    for (int i = 0; i < N; i++)
    {
        temp[i].ratio = temp[i].price / temp[i].spare;
    }

    sort(temp, temp + N, cmp);

    int heel = D;
    double sum = 0.0;

    for(int i = 0;i <N;i++)
    {
        if (heel >= temp[i].spare)
        {
            sum += temp[i].price;
            heel -= temp[i].spare;
        }
        else
        {
            sum += heel * temp[i].ratio;
            break;
        }
    }

    cout << fixed << setprecision(2) << sum << endl;
    system("pause");
    return 0;
}