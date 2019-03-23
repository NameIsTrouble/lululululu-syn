/*
    注意输出0的情况
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> ans;

int main()
{
    string a, b, standard;

    cin >> standard >> a >> b;

    int s = standard.size();

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(standard.begin(), standard.end());

    if (s > a.size())
        a.append(s - a.size(), '0');
    if (s > b.size())
        b.append(s - b.size(), '0');

    int temp = 0;

    /*模拟加法*/
    for (int i = 0; i < s; ++i)
    {
        ans.push_back((temp + a[i] - '0' + b[i] - '0') % ((standard[i] - '0') ? standard[i] - '0' : 10));
        temp = (temp + a[i] - '0' + b[i] - '0') / ((standard[i] - '0') ? standard[i] - '0' : 10);
    }

    if (temp)
        ans.push_back(temp);

    reverse(ans.begin(), ans.end());

    bool flag = false;

    for (int i = 0; i < ans.size(); ++i)
    {
        if (ans[i] || flag)
        {
            flag = true;
            cout << ans[i];
        }
    }

    if (!flag)
        cout << 0;

    cout << endl;

    system("pause");
    return 0;
}