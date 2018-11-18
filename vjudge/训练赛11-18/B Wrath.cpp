#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *human = new int[n];
    int *flag = new int[n];
    int sum = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> human[i];
        flag[i] = 0;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = max(i - human[i], 1); j < i; j++)
        {
            if (flag[j] == 0)
            {
                sum--;
                flag[j] = 1;
            }
        }
        if (sum == 1)
        {
            break;
        }
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}