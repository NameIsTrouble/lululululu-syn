/*
    统计出来每一个数字删掉以后能使后面多出来几个记录数，选一个最大的就行。
    怎么统计呢？我们需要维护两个值，一个最大值max1，一个次大值max2，因为
    对于当前数字a[i]有三种情况：①a[i] > max1，那么删掉它将会使记录数个数减少一。
    ②max2 < a[i] < max1，删掉a[i]没什么用，因为前面有max1，而删掉max1，会使记录数个数增加一。
    ③a[i] < max2，删掉a[i]对记录数没有影响。所以我们只需要扫一遍，
    用cnt[a[i]]存储下来删掉a[i]后使记录数增加的值，然后挑一个最大值出来就可以了。
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100005], b[100005];
    cin >> n;
    memset(b, 0, sizeof(b));
    int max1 = 0, max2 = 0;//最大和次大

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);

        if(max1 < a[i]) max2 = max1, max1 = a[i], b[a[i]]--;
        else if(max2 < a[i]) b[max1]++, max2 = a[i];
    }

    int ans = 1;

    for(int i = 2; i <= n; i++)
    {
        if(b[ans] < b[i]) ans = i;
    }

    printf("%d\n", ans);
    system("pause");
    return 0;
}