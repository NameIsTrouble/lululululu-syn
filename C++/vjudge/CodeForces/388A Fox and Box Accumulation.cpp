/*
    从小到大暴力堆叠即可
*/
#include<iostream>
#include<algorithm>
using namespace std;
int n, box[110], flag[110] = {0}, sum = 0;//box指承重  flag记录是否用过 sum表示有多少堆
int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> box[i];
    }

    sort(box, box + n);//从小到大排序

    for(int i = 0; i < n; i++)
    {
        int count = 0;//箱子数初始化

        if(flag[i])//如果此箱子用过 进行下一个循环
        {
            continue;
        }
        else
        {
            for(int j = i; j < n; j++)
            {
                if(count <= box[j] && !flag[j])//如果此箱子承重高于已堆叠的数量 且该箱子未使用
                {
                    flag[j] = 1;//标记使用
                    count++;//箱子数加一
                }
            }

            sum++;//箱子堆加一
        }
    }

    cout << sum << endl;
    system("pause");
    return 0;
}