#include <iostream>

using namespace std;

string title;

// 压缩
void zip()
{
    getline(cin, title);

    bool flag = false;
    char x = title[0];
    int num = 0;

    // 循环判断
    for (int i = 0; i < title.size(); ++i)
        // 如果读取字符与选择字符相同 num++
        if (title[i] == x)
        {
            num++;
            flag = true; // 标为true
        }
        else
        {
            if (num > 1)
                cout << num << x;
            else
                cout << x;
            x = title[i];
            num = 1;
            flag = false;
        }

    // 如果结束循环时字符连续
    if (flag)
        if (num > 1)
            cout << num << x;
        else
            cout << x;
    else
        cout << title[title.size() - 1];

    cout << endl;
}

// 解压
void unzip()
{
    getline(cin, title);

    string n;
    int cnt = 1;
    for (int i = 0; i < title.size(); ++i)
        // 判断是否是数字
        if (isdigit(title[i]))
            n += title[i];
        else
        {
            if (n.size())
                cnt = stoi(n);

            while (cnt--)
                cout << title[i];

            n = "";
            cnt = 1;
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