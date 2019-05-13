/*
    这道题要注意当第二个符号为+时是否可以将全部有效数字提取到小数点前
*/
#include <iostream>
#include <string>

using namespace std;

string num, ans, indexNum; //科学计数法的数字 输出的数字 指数

int main()
{
    cin >> num;

    for (int i = 1; i < num.size(); ++i)
        if (isdigit(num[i]))
            ans.push_back(num[i]); //将除符号和指数之外的数字在ans储存
        else if (num[i] == 'E')
        {
            for (int j = i + 1; j < num.size(); ++j)
                indexNum.push_back(num[j]); //将指数储存在indexNum

            break;
        }

    int temp = stoi(indexNum.substr(1)); //移动的位数

    if (indexNum[0] == '-') //小数点前移
    {
        if (temp != 1)
            ans.insert(0, temp - 1, '0'); //补足小数点之后的零

        ans.insert(0, ".");
        ans.insert(0, "0");
    }
    else //小数点后移
    {
        if (temp >= ans.size() - 1) //当有效位数刚好使小数点在最后一位有效数字后或不够小数点移动时 补足后导零 后不加小数点
            ans.append(temp - ans.size() + 1, '0');
        else //当足够小数点移动时 在合适位置加小数点
            ans.insert(1 + temp, ".");
    }

    if (num[0] == '-') //当为负数时 加符号
        ans.insert(0, num.substr(0, 1));

    cout << ans << endl;

    return 0;
}