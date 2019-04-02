/*
    水题
*/
#include <iostream>
#include <cstring>

using namespace std;

char a[100005];

int main()
{
    int ans = 0;

    scanf("%[^\n]", a);

    for (int i = 0; i < strlen(a); i++)
        if (islower(a[i]))
            ans += a[i] - 'a' + 1;

        else if (isupper(a[i]))
            ans += a[i] - 'A' + 1;

    int prf1 = 0, prf2 = 0;
    int lea;

    while (ans)
    {
        lea = ans % 2;
        if (lea)
            prf2++;
        else
            prf1++;
        ans /= 2;
    }

    cout << prf1 << " " << prf2 << endl;

    system("pause");
    return 0;
}