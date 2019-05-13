#include <iostream>
#include <algorithm>

using namespace std;

struct node
{
    string name, birth;
};

bool cmp(node a, node b)
{
    return a.birth > b.birth;
}

int main()
{
    ios::sync_with_stdio(false); //关闭流同步 否则会超时
    int N, num = 0;
    cin >> N;

    node list[N];

    for (int i = 0; i < N; i++)
    {
        node temp;
        cin >> temp.name >> temp.birth;
        if (temp.birth <= "2014/09/06" && temp.birth >= "1814/09/06")
            list[num++] = temp;
    }

    sort(list, list + num, cmp);

    cout << num;

    if (num)
        cout << " " << list[num - 1].name << " " << list[0].name;

    return 0;
}