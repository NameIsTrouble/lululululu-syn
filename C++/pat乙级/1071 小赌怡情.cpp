/*
    水题 注意格式
*/
#include <iostream>

using namespace std;

int main()
{
    int T, K;
    cin >> T >> K;

    while (K--)
    {
        int n1, n2, t, b;
        cin >> n1 >> b >> t >> n2;
        if (t > T)
        {
            printf("Not enough tokens.  Total = %d.\n", T);
            continue;
        }
        if (n2 > n1)
        {
            switch (b)
            {
            case 1:
                printf("Win %d!  Total = %d.\n", t, T + t);
                T += t;
                break;
            case 0:
                printf("Lose %d.  Total = %d.\n", t, T - t);
                T -= t;
                break;
            }
        }
        else
        {
            switch (b)
            {
            case 0:
                printf("Win %d!  Total = %d.\n", t, T + t);
                T += t;
                break;
            case 1:
                printf("Lose %d.  Total = %d.\n", t, T - t);
                T -= t;
                break;
            }
        }
        if (T <= 0)
        {
            cout << "Game Over.\n";
            break;
        }
    }
    
    system("pause");
    return 0;
}