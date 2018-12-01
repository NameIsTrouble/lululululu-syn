#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *human = new int[n];
    int sum = 1, judge;//最后一个人一定存活

    for (int i = 0; i < n; i++)
    {
        cin >> human[i];
    }

    judge = human[n - 1];//长度

    for (int i = n - 2; i >= 0; i--)
    {
        if (!judge)//如果长度为0那么下一个人存活
        {
            sum++;
        }

        judge = max(judge - 1, human[i]);//判断下一个人的刀长度与自己刀除去下一个人的长度哪个长 取其长
    }

    printf("%d\n", sum);
    system("pause");
    return 0;
}
//是时候学学时间复杂度了