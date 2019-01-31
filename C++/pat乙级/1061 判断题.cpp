/*
    大水题
*/
#include <iostream>

using namespace std;

int value[102];
int judge[102];

int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> value[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> judge[i];
    }

    while (N--)
    {
        int sum = 0;
        for (int i = 0; i < M; i++)
        {
            int x;
            cin >> x;
            if (x == judge[i])
            {
                sum += value[i];
            }
        }
        cout << sum <<endl;
    }
    system("pause");
    return 0;
}