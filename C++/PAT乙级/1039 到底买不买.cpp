#include <iostream>

using namespace std;

int main()
{
    bool flag = false;
    int sum = 0, minus = 0, store[128] = {0}, num[128] = {0}, x, y;

    while ((x = getchar()) != '\n')
        store[x]++;

    while ((y = getchar()) != '\n')
        num[y]++;

    for (int i = 0; i < 128; i++)
    {
        if (num[i] > store[i])
        {
            minus += num[i] - store[i];
            flag = true;
        }
        if (num[i] <= store[i] && flag == false)
            sum += store[i] - num[i];
    }
    if (flag == true)
        printf("No %d\n", minus);
    else
        printf("Yes %d\n", sum);

    system("pause");
    return 0;
}