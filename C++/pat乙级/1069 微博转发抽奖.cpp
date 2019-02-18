/*
    水题
*/
#include <iostream>
#include <map>

using namespace std;

map<string, bool> IsExi;//判断是否已中奖
map<int, string> line;//转发的人

int main()
{
    int m, n, s;
    cin >> m >> n >> s;

    for (int i = 1; i <= m; i++)
    {
        string a;
        cin >> a;
        line[i] = a;
    }
    
    bool judge = false;//判断是否有人中奖

    for (int i = s; i <= m; i += n)
    {
        while (1)
        {
            if (!IsExi[line[i]])
            {
                judge = true;
                IsExi[line[i]] = true;
                cout << line[i] << endl;
                break;
            }
            else
            {
                i++;
            }
        }
    }

    if (!judge)
    {
        cout << "Keep going...\n";
    }

    system("pause");
    return 0;
}