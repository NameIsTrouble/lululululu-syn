#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> bad;

int main()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0, j = i; i < a.size(); ++i)
    {
        if (a[i] == b[j])
            ++j;
        else if (find(bad.begin(), bad.end(), isalpha(a[i]) ? toupper(a[i]) : a[i]) == bad.end())
            bad.push_back(isalpha(a[i]) ? toupper(a[i]) : a[i]);
    }

    for (auto &i : bad)
        cout << i;

    return 0;
}