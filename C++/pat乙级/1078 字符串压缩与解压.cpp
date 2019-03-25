#include <iostream>

using namespace std;

string title;

void zip()
{
    getline(cin, title);

    bool flag = false;
    char x;
    int num = 0;

    for (int i = 0; i < title.size(); ++i)
    {
        if (!flag)
        {
            flag = true;
            x = title[i];
        }
        if (title[i] == x)
        {
            num++;
            continue;
        }
        else
        {
            if (num > 1)
                cout << num << x;
            else
                cout << x;
            num = 1;
            flag = false;
        }
    }

    if (flag)
        if (num > 1)
            cout << num << x;
        else
            cout << x;
    else
        cout << title[title.size() - 1];

    cout << endl;
}

void unzip()
{
    getline(cin, title);

    string n;
    int cnt = 1;
    for (int i = 0; i < title.size(); ++i)
    {
        if (isdigit(title[i]))
        {
            n.append(1, title[i]);
        }
        else
        {
            if (title.size())
                cnt = stoi(n);

            while (cnt--)
                cout << title[i];

            n = "";
            cnt = 1;
        }
    }

    cout << endl;
}

int main()
{
    char ch;
    cin >> ch;
    getchar();

    if (ch == 'C')
        zip();
    else
        unzip();

    system("pause");
    return 0;
}