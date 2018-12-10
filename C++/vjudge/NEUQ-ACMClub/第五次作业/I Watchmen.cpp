/*
    当两点x或y相同时 计算的距离相同
    但是要注意去除x和y同时相同的情况
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int count = 0;
    map<int, int> x;            //记录相同x的
    map<int, int> y;            //记录相同y的
    map<pair<int, int>, int> s; //记录xy同时相同的
    int n;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        count += x[a] + y[b] - s[make_pair(a, b)]; //减去xy同时相同的情况
        x[a]++;
        y[b]++;
        s[make_pair(a, b)]++;
    }

    cout << count << endl;
    system("pause");
    return 0;
}
//这个算法太nb了 膜了
// 为何递加可以算出多少对
// 以x举例
// x[i]初值为0
// 如有n个i
// 递加结果未 n*(n-1)/2
// 这个结果与 C(^2)(n)相同