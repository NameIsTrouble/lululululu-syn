#include <bits/stdc++.h>
using namespace std;
int n, BookNum[200005], step,count=0;
int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        BookNum[x] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> step;

        if (BookNum[step] > count)
        {
            printf("%d ", BookNum[step] - count);
            count = BookNum[step];
        }
        else
        {
            printf("0 ");
        }
    }

    cout << endl;
    system("pause");
    return 0;
}