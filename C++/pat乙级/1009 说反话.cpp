#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> ans;

int main()
{
    string temp, v;
    getline(cin, v);

    stringstream ss(v);

    while (ss >> temp)
        ans.push_back(temp);

    for (int i = ans.size() - 1; i >= 0; --i)
        cout << ans[i] << (i ? ' ' : '\n');

    return 0;
}