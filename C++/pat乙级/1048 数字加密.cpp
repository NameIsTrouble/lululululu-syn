/*
    注意要输出的字符串长度要和ab中比较长的字符串长度相同
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> ans;

int main()
{
    string a, b;
    cin >> a >> b;
    vector<char> c(a.size() > b.size() ? a.size() : b.size());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (a.size() < b.size())
        a.append(b.size() - a.size(), '0');
    else
        b.append(a.size() - b.size(), '0');

    for (int i = 0; i < b.size(); ++i)
    {
        if (i % 2 == 0)
        {
            int temp = (a[i] + b[i] - 2 * '0') % 13;
            switch (temp)
            {
            case 10:
                c[i] = 'J';
                break;
            case 11:
                c[i] = 'Q';
                break;
            case 12:
                c[i] = 'K';
                break;
            default:
                c[i] = temp + '0';
            }
        }
        else
            c[i] = b[i] - a[i] < 0 ? b[i] - a[i] + 10 + '0' : b[i] - a[i] + '0';
    }

    reverse(c.begin(), c.end());

    for (int i = 0; i < c.size(); ++i)
    {
        cout << c[i];
    }
    cout << endl;

    system("pause");
    return 0;
}