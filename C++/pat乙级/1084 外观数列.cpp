/*
    详见1078 字符串压缩与解压
*/
#include <iostream>

using namespace std;

int main()
{
    int x, N;
    cin >> x >> N;

    string ans;
    ans += to_string(x);

    for (int i = 1; i < N; ++i)
    {
        char ch = ans[0];
        int num = 0;
        bool flag = false;
        string temp;
        for (int j = 0; j < ans.size(); ++j)
        {
            if (ans[j] == ch)
            {
                num++;
                flag = true;
            }
            else
            {
                temp += ch;
                temp += to_string(num);
                ch = ans[j];
                num = 1;
            }
        }

        if (flag)
        {
            temp += ans[ans.size() - 1];
            temp += to_string(num);
        }
        else
        {
            temp += ch;
            temp += "1";
        }
        
        ans = temp;
        temp = "";
    }

    cout << ans << endl;

    system("pause");
    return 0;
}