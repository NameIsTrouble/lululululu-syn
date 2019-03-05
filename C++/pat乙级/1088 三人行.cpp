/*
    水题
    注意数据类型
*/
#include <iostream>
#include <cmath>

using namespace std;

double Get(int i)
{
    int a = i % 10, b = i / 10;

    return 10 * a + b;
}

int main()
{
    int M, X, Y;
    cin >> M >> X >> Y;

    double s1, s2, s3;
    bool judge = false;

    for (int i = 99; i >= 10; i--)
    {
        s1 = i;
        s2 = Get(i);
        s3 = fabs(s1 - s2) / X;
        if (s3 * Y == s2)
        {
            cout << s1 << " ";

            if (s1 > M)
            {
                cout << "Cong ";
            }
            else if (s1 == M)
            {
                cout << "Ping ";
            }
            else
            {
                cout << "Gai ";
            }

            if (s2 > M)
            {
                cout << "Cong ";
            }
            else if (s2 == M)
            {
                cout << "Ping ";
            }
            else
            {
                cout << "Gai ";
            }

            if (s3 > M)
            {
                cout << "Cong\n";
            }
            else if (s3 == M)
            {
                cout << "Ping\n";
            }
            else
            {
                cout << "Gai\n";
            }
            
            judge = true;
            break;
        }
    }

    if (!judge)
    {
        cout << "No Solution\n";
    }

    system("pause");
    return 0;
}