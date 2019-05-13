#include <iostream>

using namespace std;

int main()
{
    int n, stu[100010][2], max[100010] = {0}, m = 0, mn = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &stu[i][0], &stu[i][1]);
        max[stu[i][0]] += stu[i][1];

        if (m < max[stu[i][0]])
        {
            m = max[stu[i][0]];
            mn = stu[i][0];
        }
    }

    printf("%d %d\n", mn, m);

    system("pause");
    return 0;
}