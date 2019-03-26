/*
    水题
*/
#include <iostream>
#include <algorithm>

using namespace std;

bool judge(string x)
{
    string t = x;
    reverse(t.begin(), t.end());
    if (x == t)
        return true;
    else
        return false;
}

string plu(string a, string b)
{
    int s = a.size();

    string ans;
    int f = 0;

    for (int i = 0; i < s; ++i)
    {
        ans += (((a[i] + b[i] - (2 * '0') + f) % 10) + '0');
        f = (a[i] + b[i] - (2 * '0') + f) / 10;
    }

    if (f > 0)
        ans += "1";

    return ans;
}

int main()
{
    string temp;
    cin >> temp;
    bool flag = false;

    for (int i = 0; i < 10; ++i)
    {
        if (judge(temp))
        {
            flag = true;
            cout << temp << " is a palindromic number.\n";
            break;
        }
        else
        {
            string a = temp;
            reverse(a.begin(), a.end());
            cout << temp << " + " << a << " = ";
            temp = plu(temp, a);
            reverse(temp.begin(), temp.end());
            cout << temp << endl;
        }
    }

    if (!flag)
        cout << "Not found in 10 iterations.\n";

    system("pause");
    return 0;
}