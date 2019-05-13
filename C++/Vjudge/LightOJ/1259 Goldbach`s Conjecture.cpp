/*
    打表就完事了
*/
#include <bits/stdc++.h>
using namespace std;
#define N 10000000
vector<int> prime;
bool isprime[N + 1];
//打表
void pri()
{
    memset(isprime, true, sizeof(isprime));
    isprime[0]=false;
    isprime[1]=false;
    for (int i = 2; i <= N; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            for (int j = i + i; j <= N; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}
int main()
{
    pri();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int j = 0; j<prime.size()&&2 * prime[j] <=n; j++)
        {
            if (isprime[n - prime[j]])//判断另一个数是不是素数
            {
                count++;
            }
        }
        cout << "Case " << i << ": " << count << endl;
    }
    system("pause");
    return 0;
}