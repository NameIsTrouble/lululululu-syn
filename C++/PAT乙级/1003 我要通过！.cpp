/*
	这道题要注意P T两边和中间A的数量的关系
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
	
    while (n--)
    {
        int sub_in_P, sub_in_T; //记录PT的下标
        string temp;
        cin >> temp;
        bool flag = false; //判断是否符合要求

        for (int i = 0; i < temp.size(); ++i)
        {
            if (temp[i] == 'P')
                sub_in_P = i;
            else if (temp[i] == 'T')
                sub_in_T = i;
            else if (temp[i] != 'A') //判断是否有非法字符
            {
                flag = true;
                break;
            }
        }

        if (!flag && sub_in_T - sub_in_P - 1 && (sub_in_T - sub_in_P - 1) * sub_in_P == temp.size() - 1 - sub_in_T)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    system("pause");
    return 0;
}