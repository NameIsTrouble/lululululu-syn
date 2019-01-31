/*
    水题
*/
#include <iostream>
#include <set>

using namespace std;

set<int> temp;
int prf[10005];

int main()
{
    string x;
    int N, sum = 0;
    cin >> N;

    while (N--)
    {
        cin >> x;
        int num = 0;

        for (int i = 0; i < x.size(); i++)
        {
            num += x[i] - '0';
        }

        set<int>::iterator it = temp.find(num);

        if (it == temp.end())
        {
            temp.insert(num);
            sum++;
        }
    }

    cout << sum << endl;

    for (set<int>::iterator i = temp.begin(); i != temp.end(); i++)
    {
        sum--;
        cout << *i;
        if (!sum)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }

    system("pause");
    return 0;
}