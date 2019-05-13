/*
    满足两个条件
    序列中的主元与排序后的位置相同
    主元前的元素比主元小
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a, b, ans;

int main()
{
    int n, cnt = 0, max = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
        b.push_back(temp);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == b[i] && b[i] > max)
        {
            ans.push_back(b[i]);
            cnt++;
        }

        if (b[i] > max)
            max = b[i];
    }

    cout << cnt << endl;

    for (int i = 0; i < ans.size(); ++i)
        cout << (i ? " " : "") << ans[i];

    cout << endl;

    system("pause");
    return 0;
}