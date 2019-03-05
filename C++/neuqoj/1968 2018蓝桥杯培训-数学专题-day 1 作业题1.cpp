#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

#define Max 32768

vector<int> Primer;
bool IsPrimer[Max];

/*筛法求素数*/
void FindPrimer()
{
    for (int i = 2; i < Max; i++)
    {
        if (IsPrimer[i])
        {
            Primer.push_back(i);
            IsPrimer[i] = true;

            for (int j = 2 * i; j < Max; j += i)
            {
                IsPrimer[j] = false;
            }
        }
    }
}

int main()
{
    memset(IsPrimer, true, sizeof(IsPrimer));
    IsPrimer[0] = false;
    IsPrimer[1] = false;

    FindPrimer();

    int temp, c = 0;
    bool judge = false;
    cin >> temp;
    cout << temp;

    while (c < Primer.size())
    {
        if (temp % Primer[c])
        {
            c++;
        }
        else
        {
            if (!judge)
            {
                judge = true;
                cout << "=" << Primer[c];
            }
            else
            {
                cout << "*" << Primer[c];
            }
            temp = temp / Primer[c];

            if (!temp)
            {
                break;
            }
        }
    }

    cout << endl;
    system("pause");
    return 0;
}