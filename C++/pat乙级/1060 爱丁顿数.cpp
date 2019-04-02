/*
    排序判断
    水题 注意没有符合要求的数时 输出0
*/
#include <iostream>
#include <algorithm>

using namespace std;

int temp[100005];

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> temp[i];

    sort(temp, temp + N, cmp);

    int max = temp[0];
    bool flag = false;

    for (int i = max - 2 > N ? N : max - 2; i >= 0; i--)
        if (temp[i] > i + 1)
        {
            flag = true;
            cout << i + 1 << endl;
            break;
        }

    if (!flag)
        cout << 0 << endl;

    system("pause");
    return 0;
}