/*
    注意数据格式
*/
#include <iostream>

using namespace std;

int main()
{
    double e;
    int N, D, ecd = 0, mecd = 0;
    cin >> N >> e >> D;
    int n = N;

    while (n--)
    {
        int K;
        cin >> K;
        int k = K, num = 0;

        while (k--)
        {
            double E;
            cin >> E;

            if (E < e)
            {
                num++;
            }
        }

        if (2 * num > K && K > D)
        {
            ecd++;
        }
        else if (2 * num > K)
        {
            mecd++;
        }
    }

    printf("%.1lf%% %.1lf%%\n", mecd * 100.0 / N, ecd * 100.0 / N);
    system("pause");
    return 0;
}