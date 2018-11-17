/*
    简单的字符统计
*/
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char test[100010];
    while (gets(test))
    {
        int l = strlen(test), num[128] = {0};//l=字符串长度 sum 字母数量
        for (int i = 0; i < l; i++)
        {
            if (isalpha(test[i]))//判断是否是字母
            {
                num[test[i]]++;
            }
        }
        for (int i = 'a'; i <= 'z'; i++)
        {
            printf("%c:%d\n", i, num[i]);
        }
        printf("\n");
    }
    //system("pause");
    return 0;
}