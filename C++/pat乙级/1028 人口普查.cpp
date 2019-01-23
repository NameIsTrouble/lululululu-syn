#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

struct human
{
    string name;
    int year, month, day;
} temp[100005];
/*判断是否合法*/
bool judge(human a)
{
    if (a.year > 2014 || a.year < 1814)
    {
        return false;
    }
    else
    {
        if (a.year == 2014 && a.month > 9)
            return false;
        else if (a.year == 2014 && a.month == 9 && a.day > 6)
            return false;
        else if (a.year == 1814 && a.month < 9)
            return false;
        else if (a.year == 1814 && a.month == 9 && a.day < 6)
            return false;
        else
            return true;
    }
}
/*排序*/
bool cmp(human a, human b)
{
    if (a.year == b.year)
    {
        if (a.month == b.month)
        {
            return a.day > b.day;
        }
        else
        {
            return a.month > b.month;
        }
    }
    else
    {
        return a.year > b.year;
    }
}

int main()
{
    int N, num = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        human a;
        cin >> a.name;
        scanf("%d/%d/%d", &a.year, &a.month, &a.day);
        if (judge(a))/*如果合法 算入temp序列*/
        {
            temp[num] = a;
            num++;
        }
    }
    sort(temp, temp + num, cmp);
    if (num)
        cout << num << " " << temp[num - 1].name << " " << temp[0].name << endl;
    else
        cout << 0 << endl;
    system("pause");
    return 0;
}