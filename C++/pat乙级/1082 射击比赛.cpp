/*
    水题
*/
#include <iostream>
#include <algorithm>

using namespace std;

struct node
{
    string Id;
    int x, y;
    double score;
} member[100005];

bool cmp(node a, node b)
{
    return a.score < b.score;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> member[i].Id >> member[i].x >> member[i].y;
        member[i].score = member[i].x * member[i].x + member[i].y * member[i].y;
    }

    sort(member, member + n, cmp);

    cout << member[0].Id << " " << member[n - 1].Id << endl;

    system("pause");
    return 0;
}