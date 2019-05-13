#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int num[128] = {0}, sum = 0, ch;
    char test[1000];
    //cin >> test;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            num[ch]++;
        }
        if (num[ch] == 1)
        {
            sum++;
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}
/*set
输入用getline*/