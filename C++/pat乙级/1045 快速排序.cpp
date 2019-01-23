//WA tle
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int temp[100005];
bool judge[100005];
int ans[100005];

bool cmp(int a,int b)
{
    return a < b;
}

int main()
{
    memset(judge, true, sizeof(judge));
    int N, num = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (temp[i] < temp[j])
            {
                judge[i] = false;
                break;
            }
        }
        for (int j = i + 1; j < N && judge[i]; j++)
        {
            if (temp[j] < temp[i])
            {
                judge[i] = false;
                break;
            }
        }
        if(judge[i])
        {
            ans[num] = temp[i];
            num++;
        }
    }
    sort(ans, ans + num, cmp);
    cout << num << endl;
    for(int i = 0; i < num - 1; i++)
    {
        cout << ans[i]<<" ";
    }
    cout << ans[num - 1] << endl;
    system("pause");
    return 0;
}