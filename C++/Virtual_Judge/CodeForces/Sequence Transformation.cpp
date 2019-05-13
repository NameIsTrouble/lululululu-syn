/*
    先将奇数项全部清除 清除之前输出1
    将剩下的项的奇数项清除 清除之前输出2
    讲清除剩下的奇数项清除 清除之前输出4
    以此类推
    特别注意 当只剩三项时 剩下三项的第一项为最大公因数 输出两遍 最后一遍输出第三项
*/
#include <bits/stdc++.h>
using namespace std;
int test[1000005];
int main()
{
    int n;
    cin >> n;
    int count = 0, prf = 1;//prf为要输出的数
    int next = 2;//next为要排除的项与下一个要排出的项的距离
    //初始化序列数组
    for (int i = 1; i <= n; i++)
    {
        test[i] = i;
    }
    //当输出个数不足n时执行循环
    while (count != n)
    {
        if (count == n - 3)//判断剩余项是否等于三
        {
            int j = prf;
            for (; j <= n-prf ; j += prf)
            {
                cout << prf << " ";
            }
            cout << test[j];
            count+=3;
        }
        else
        {
            for (int i = prf; i <= n; i += next)
            {
                cout<<prf<<" ";
                count++;
            }
        }
        prf *= 2;
        next *= 2;
    }
    cout << endl;
    system("pause");
    return 0;
}