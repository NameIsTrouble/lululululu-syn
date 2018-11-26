/*
    此题并不需要一个个去枚举
    由于1和0可以转换
    只需判断每行的初始状态是否相同  即每行的每个数是否相同 
    取相同行的行数的最大值即可
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
char RowState[10010][10010];//二维数组储存字符
int main()
{
    int n, count = 0, mx = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> RowState[i];//输入每行的初始数值
    }

    for(int i = 0; i < n; i++)
    {
        count = 0;//相同行数初始化  这里由于每行的状态与他自身一定是相同的 所以把count初始化为0

        for(int j = 0; j < n; j++)
        {
            if(strcmp(RowState[i], RowState[j]) == 0)//如果两行相同 相同行数加一
            {
                count++;
            }
        }

        mx = max(mx, count);//取大值
    }

    printf("%d\n", mx);
    system("pause");
    return 0;
}