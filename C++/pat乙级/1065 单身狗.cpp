#include <iostream>
#include <set>
#include <map>

using namespace std;

map<string, string> IsSingle;//已配对的人的对象
set<string> Single;//在列的没有配对的人
map<string, bool> IsPresent;//是否出场

int main()
{
    int n;
    cin >> n;

    /*录入已配对人士*/
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        IsSingle[a] = b;
        IsSingle[b] = a;
    }

    cin >> n;

    /*录入到场人士*/
    while (n--)
    {
        string a;
        cin >> a;
        IsPresent[a] = true;
    }

    map<string, bool>::iterator it = IsPresent.begin();
    int num = 0;

    /*遍历到场人士 识别未配对人士*/
    for (; it != IsPresent.end(); it++)
    {
        if (!IsPresent[IsSingle[it->first]])
        {
            num++;
            Single.insert(it->first);
        }
    }

    cout << num << endl;
    int a = 0;

    /*遍历输出*/
    for (set<string>::iterator i = Single.begin(); i != Single.end(); i++)
    {
        cout << *i;
        if (a == num - 1)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
        a++;
    }

    system("pause");
    return 0;
}