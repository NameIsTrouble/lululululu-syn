#include <iostream>

using namespace std;

struct student
{
    char licensenum[14];
    int testnum;
    int truenum;
} str[1010];

int main()
{
    int n, stu[1010];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s %d %d", &str[i].licensenum, &str[i].testnum, &str[i].truenum);

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &stu[i]);
        for (int j = 0; j < n; j++)
            if (stu[i] == str[j].testnum)
                printf("%s %d\n", str[j].licensenum, str[j].truenum);
    }

    system("pause");
    return 0;
}