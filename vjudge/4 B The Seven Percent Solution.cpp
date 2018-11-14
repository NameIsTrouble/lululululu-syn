#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char test[100];
    while (gets(test))
    {
        if (test[0] == '#')
        {
            break;
        }
        else
        {
            int l = strlen(test);
            for (int i = 0; i < l; i++)
            {
                switch (test[i])
                {
                case ' ':
                    printf("%%20");
                    break;
                case '!':
                    printf("%%21");
                    break;
                case '$':
                    printf("%%24");
                    break;
                case '%':
                    printf("%%25");
                    break;
                case '(':
                    printf("%%28");
                    break;
                case ')':
                    printf("%%29");
                    break;
                case '*':
                    printf("%%2a");
                    break;
                default:
                    printf("%c", test[i]);
                    break;
                }
            }
            printf("\n");
        }
    }
   // system("pause");
    return 0;
}