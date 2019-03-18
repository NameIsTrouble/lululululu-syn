/*
    这道题要注意当第二个符号为+时是否可以将全部有效数字提取到小数点前
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string a;
    while (cin >> a)
    {
        vector<char> ans;

        if (a[0] == '-')
            ans.push_back(a[0]);

        int sub_index;

        for (int i = 1; i < a.size(); ++i)
        {
            if (a[i] == 'E') //标记E的下标
            {
                sub_index = i;
                break;
            }
        }

        long long temp = 0;

        for (int i = sub_index + 2; i < a.size(); ++i)
            temp = temp * 10 + a[i] - '0'; //记录E后的数据

        //当E后为-时直接将小数点提前 即添加前导0即可
        if (a[sub_index + 1] == '-')
        {
            for (int i = 0; i <= temp; ++i)
            {
                if (i == 1)
                    ans.push_back('.');
                else
                    ans.push_back('0');
            }

            for (int i = 1; i < sub_index; ++i)
            {
                if (i != 2)
                    ans.push_back(a[i]);
            }
        }
        //当E后为+时 分三种情况
        else
        {
            //当小数点不能移至有效数字后时
            if (sub_index > temp + 3)
            {
                for (int i = 1; i < temp + 3; ++i)
                    if (i != 2)
                        ans.push_back(a[i]);

                ans.push_back('.');

                for (int i = temp + 3; i < sub_index; ++i)
                    ans.push_back(a[i]);
            }
            //当小数点恰好移至有效数字后时
            else if (sub_index == temp + 3)
            {
                for (int i = 1; i < sub_index; ++i)
                    if (i != 2)
                        ans.push_back(a[i]);
            }
            //当小数点可以移至有效数字后时
            else
            {
                for (int i = 1; i < sub_index; ++i)
                    if (i != 2)
                        ans.push_back(a[i]);

                for (int i = 0; i < temp - sub_index + 3; ++i)
                    ans.push_back('0');
            }
        }

        //循环输出
        for (int i = 0; i < ans.size(); ++i)
            cout << ans[i];

        cout << endl;
    }

    system("pause");
    return 0;
}