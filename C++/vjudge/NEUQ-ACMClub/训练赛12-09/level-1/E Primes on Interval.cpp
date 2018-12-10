/*
    二分法
    求在区间[a,b]上使得任意x满足题意有[x,x+l-1]上有不少于k的素数
*/
#include<bits/stdc++.h>
using namespace std;
#define N 1000000
int num[1000001] = {0};//第i个数前有多少个素数
int a, b, k;
bool pp[1000001];//判断是否是素数
bool flag(int mid)
{
    for(int i = a; i <= b - mid + 1; i++)
    {
        if(num[i + mid - 1] - num[i - 1] < k)
        {
            return 0;
        }
    }

    return 1;
}
void get_prime()//打表
{
    memset(pp, true, sizeof(pp));

    for (int i = 2; i <= N; i++)
    {
        num[i] = num[i - 1];

        if (pp[i])
        {
            num[i]++;

            for (int j = 2 * i; j <= N; j += i)
            {
                pp[j] = false;
            }
        }
    }
}
int main()
{
    cin >> a >> b >> k;
    get_prime();

    if(num[b] - num[a - 1] < k)
    {
        cout << "-1\n";
        //system("pause");
        return  0;
    }
    else//二分法
    {
        int l = 1, r = b - a + 1;
        int prf;

        while(l <= r)
        {
            int mid = (l + r) >> 1 ;

            if(flag(mid))
            {
                r = mid - 1;
                prf = mid;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << prf << endl;
    }

    system("pause");
    return 0;
}