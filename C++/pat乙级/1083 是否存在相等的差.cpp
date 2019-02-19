/*
    水题
*/
#include <iostream>
#include <cmath>

using namespace std;

int ans[100005] = {0};

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans[abs(x - i - 1)]++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (ans[i] > 1)
        {
            cout << i << " " << ans[i] << endl;
        }
    }

    system("pause");
    return 0;
}