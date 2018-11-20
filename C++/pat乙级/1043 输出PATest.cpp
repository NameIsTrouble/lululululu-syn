#include <iostream>
using namespace std;
int main()
{
    int a, num[7]={0},sum=0;
    while ((a = getchar()) != '\n')
    {
        switch (a)
        {
        case 'P':
            num[0]++;
            break;
        case 'A':
            num[1]++;
            break;
        case 'T':
            num[2]++;
            break;
        case 'e':
            num[3]++;
            break;
        case 's':
            num[4]++;
            break;
        case 't':
            num[5]++;
            break;
        }
    }
    while (1)
    {
        if (num[0] != 0)
        {
            printf("P");
            num[0]--;
        }
        if (num[1] != 0)
        {
            printf("A");
            num[1]--;
        }
        if (num[2] != 0)
        {
            printf("T");
            num[2]--;
        }
        if (num[3] != 0)
        {
            printf("e");
            num[3]--;
        }
        if (num[4] != 0)
        {
            printf("s");
            num[4]--;
        }
        if (num[5] != 0)
        {
            printf("t");
            num[5]--;
        }
        if (num[0]+num[1]+num[2]+num[3]+num[4]+num[5] == 0)
        {
            break;
        }
    }
    printf("\n");
    system("pause");
    return 0;
}