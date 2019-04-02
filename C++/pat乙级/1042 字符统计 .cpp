#include <iostream>

using namespace std;

int main()
{
    int a, num[27] = {0};

    while ((a = getchar()) != '\n')
        if (a >= 'A' && a <= 'Z')
            num[a - 'A']++;
        else if (a >= 'a' && a <= 'z')
            num[a - 'a']++;

    int max = 0;
    char c;

    for (int i = 0; i < 26; i++)
        if (max < num[i])
        {
            max = num[i];
            c = i + 'a';
        }

    printf("%c %d\n", c, max);

    system("pause");
    return 0;
}