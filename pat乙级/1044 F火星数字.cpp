#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    int n, m, z, v;
    string fire1[13] = {" ", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string fire2[13] = {" ", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, num[3], sum = 0, count = 0, cc = 0;
        char test[100];
        char c[7];
        bool flag;
        while ((a = getchar()) != '\n')
        {
            test[count] = a;
        }
        if (test[0] >= '0' && test[0] <= '9')
        {
            for (int i = count; i >= 0; i--)
            {
                sum += num[count] * pow(10, count - i);
            }
            while (sum != 0)
            {
                m = sum / 13;
                if (m != 0)
                {
                    printf("%s %s\n", fire2[m], fire1[sum % 13]);
                }
                else
                {
                    printf("%s\n", fire1[sum]);
                }
            }
        }
    }
    system("pause");
    return 0;
}