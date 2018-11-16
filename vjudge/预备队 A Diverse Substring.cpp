#include <bits/stdc++.h>
using namespace std;
bool isans(char a[], int n)
{
    int num[128] = {0};
    for (int i = 0; i < n; i++)
    {
        num[a[i]]++;
        if (2*num[a[i]] > n)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    string test;
    cin >> test;
    for (int j = 3; j < n; j++)
    {

        for (int i = 0; i < n - j - 1; i++)
        {
            char str[100]="";
            for (int v = 0; v < j; v++)
                str[v] = test[i + v];
            if (isans(str, j) == true)
            {
                printf("YES\n");
                printf("%s\n", str);
                system("pause");
                return 0;
            }
        }
    }
    printf("NO\n");
    system("pause");
    return 0;
}
