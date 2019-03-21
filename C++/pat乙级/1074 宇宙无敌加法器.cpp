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

    int s = a.size() > b.size() ? a.size() : b.size();

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(standard.begin(), standard.end());

    if (s > standard.size())
        standard.append(s - standard.size(), '0');
    if (s > a.size())
        a.append(s - a.size(), '0');
    if (s > b.size())
        b.append(s - b.size(), '0');

    int temp = 0;

    for (int i = 0; i < s; ++i)
    {
        temp = (temp + a[i] - '0' + b[i] - '0') / standard[i];
        ans.push_back((temp + a[i] - '0' + b[i] - '0') / standard[i]);
    }

    if (temp)
        ans.push_back(temp);

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); ++i)
        cout << ans[i];

    cout << endl;

    system("pause");
    return 0;
}