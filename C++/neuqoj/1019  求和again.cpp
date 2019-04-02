#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    while (cin >> n && n != -1)
    {
        string ans;
        ans.append(n - 1, '0');
        ans.push_back('5');
        ans.append(n - 1, '0');
        ans.push_back('5');

        reverse(ans.begin(), ans.end());
        cout << ans << endl;        
    }

    return 0;
}