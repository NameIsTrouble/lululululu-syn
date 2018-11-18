/*
    其实这题挺水的
    但奈何脑子进水
    程序一直出错
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char test[1010]; //输入字符串
    int prf[1000];   //输出数字
    while (scanf("%s", &test) != EOF)
    {
        int p = 0; //输出数组的下标
        //循环读入test
        for (int i = 0; test[i] != '\0';)
        {
            if (test[i] == '5') //当test【i】==‘5’时 读下一个字符
            {
                i++;
                continue;
            }
            int sum = 0; //记录要输出的数字
            //计算要输出的数字
            while (test[i] != '5' && test[i] != '\0')
            {
                sum = sum * 10 + test[i] - '0';
                i++;
            }
            prf[p] = sum;
            p++;
        }
        sort(prf, prf + p); //输出数字排序
        for (int i = 0; i < p; i++)
        {
            printf("%d", prf[i]);
            if (i != p - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}