/*
    眼瞎没看清数据范围
    暴力求解就行
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test;
    cin >> test;
    int count = 0, sum = 0;

    if(test.size() == 1)//如果test只有一个数 直接输出
    {
        count = 0;
    }
    else
    {
        for(int i = 0; i < test.size(); i++)
        {
            sum += test[i] - '0';
        }//计算第一次总和
        count++;
        while(sum>=10)//当不符合题意时循环
        {
            int x=sum;
            sum=0;
            while(x)//计算总和
            {
                sum+=x%10;
                x/=10;
            }
            count++;//次数增加
        }
    }

    cout << count << endl;
    system("pause");
    return 0;
}