#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, l[200008], r[200008], max = 0, best = 0;
    long long on, ll=0, rr=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>l[i]>>r[i];
        ll += l[i];
        rr += r[i];
    }
    on = abs(ll - rr);
    for (int i = 1; i <= n; i++)
    {
        if (abs(ll - l[i] + r[i] - rr + r[i] - l[i])> on)
        {
            on = abs(ll - l[i] + r[i] - rr + r[i] - l[i]);
            best = i;
        }
    }
    printf("%d\n", best);
    system("pause");
    return 0;
}