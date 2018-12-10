/*
    当两点x或y相同时 计算的距离相同
    但是要注意去除x和y同时相同的情况
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int count = 0;
    map<int, int> x;//记录相同x的
    map<int, int> y;//记录相同y的
    map<pair<int, int>, int> s;//记录xy同时相同的
    int n, c;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        count += (x[a]++);
        count += (y[b]++);
        count -= (s[make_pair(a, b)]++);//减去xy同时相同的情况
    }
    cout << count << endl;
    system("pause");
    return 0;
}