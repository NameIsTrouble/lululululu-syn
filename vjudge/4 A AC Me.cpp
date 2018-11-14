#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char test[100010];
    while (gets(test))
    {
        int l = strlen(test), num[128] = {0};
        for (int i = 0; i < l; i++)
        {
            if (isalpha(test[i]))
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