#include <iostream>

using namespace std;

int main()
{
    char s[1000000];
    int count = 0, cp = 0, ct = 0;
    int x;
    long long int sum = 0;

    for (int i = 0; (x = getchar()) != '\n'; i++)
    {
        s[i] = x;

        if (x == 'T')
            ct++;

        count = i;
    }

    for (int i = 0; i <= count; i++)
        if (s[i] == 'P')
            cp++;
        else if (s[i] == 'T')
            ct--;
        else
            sum = (sum + (cp * ct) % 1000000007) % 1000000007;

    printf("%d", sum);

    system("pause");
    return 0;
}