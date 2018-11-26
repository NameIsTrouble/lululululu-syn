/*
    tle十好几次
    不想说啥
    记得开全局数组变量
*/
#include<bits/stdc++.h>
using namespace std;
int test[1001000];
int main()
{
    int n, sum = 0, num = 0;
    cin >> n;

    for(int i = 0; i <n; i++)
    {
        cin >> test[i];
        sum += test[i];//总和
    }

    int count = 0;

    for(int i = 0; i < n-1 ; i++)
    {
        num += test[i];//前i+1个数的和

        if(num * 2 == sum )
        {
            count++;
        }
    }

    cout << count << endl;
    system("pause");
    return 0;
}