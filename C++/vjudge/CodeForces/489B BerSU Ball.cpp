/*
    贪心
*/
#include <bits/stdc++.h>
using namespace std;
int boy[101];
int girl[101];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> girl[i];
    }
    sort(boy, boy + n);
    sort(girl, girl + m);
    int count=0;
    for (int i = 0, j = 0; i < n && j < m;)
    {
        if (boy[i] - girl[j] > 1)//如果男孩比女孩大 就判断下一个女孩
        {
            j++;
        }
        else if (girl[j] - boy[i] > 1)//如果女孩比男孩大 就判断下一个男孩
        {
            i++;
        }
        else
        {
            count++;
            i++, j++;
        }
    }
    cout<<count<<endl;
    system("pause");
    return 0;
}