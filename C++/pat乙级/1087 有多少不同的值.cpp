/*
    数学
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans2 = N / 2;//计算有多少不同的N / 2
    if (ans2 != N / 2)
    {
        ans2++;
    }
    int ans3 = N / 3;//计算有多少不同的N / 3
    if (ans3 != N / 3)
    {
        ans3++;
    }
    int ans5 = N / 5;//计算有多少不同的N / 5
    if (ans5 != N / 5)
    {
        ans5++;
    }
    int ans = N / 10 + N / 15 + N / 6 - N / 30;//计算重合的点
    cout << ans2 + ans3 + ans5 - ans + 1 << endl;
    system("pause");
    return 0;
}