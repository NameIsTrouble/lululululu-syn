/*
    同余定理
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int n, digit, sum = 1;
        cin >> n >> digit;
        int dnt = digit % n;
        while(dnt)//判断是否符合
        {
            dnt = (dnt * 10 + digit) % n;//循环执行
            sum++;
        }
        count++;
        cout << "Case " << count << ": " << sum << endl;
    }
    system("pause");
    return 0;
}
/*
    同余定理:
    有(a+b)%c=(a%c+b%c)%c
    (a*b)%c=(a%c*b%c)%c
    对于n位digit x
    x=(...(((digit*10)+digit)*10+digit)*10+digit)...)
    x%n=(...(((digit*10)+digit)*10+digit)*10+digit)...)%n
       =(...(((digit%n*10%n)%n+digit%n)%n*10%n+digit%n)%n*10%n+digit%n)%n...)%n
     //=(...(((dnt*10%n)%n+digit%n)%n*10%n+digit%n)%n*10%n+digit%n)%n...)%n
       =(...(((dnt*10)%n+digit%n)%n*10%n+digit%n)%n*10%n+digit%n)%n...)%n
     //=(...((dnt*10+digit)%n*10%n+digit%n)%n*10%n+digit%n)%n...)%n
     //=(...((dnt*10+digit)%n*10+digit)%n*10+digit)%n...)%n
    可知每一次循环 dnt=(dnt*10+digit)%n
*/