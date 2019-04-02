/*
    水题
*/
#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<char> Ex;
vector<char> prf;

int main()
{

    int ch;

    while ((ch = getchar()) != '\n')
    {
        set<char>::iterator it = Ex.find(ch);
        if (it == Ex.end())
        {
            prf.push_back(ch);
            Ex.insert(ch);
        }
    }

    while ((ch = getchar()) != '\n')
    {
        set<char>::iterator it = Ex.find(ch);
        if (it == Ex.end())
        {
            prf.push_back(ch);
            Ex.insert(ch);
        }
    }

    for (vector<char>::iterator i = prf.begin(); i != prf.end(); i++)
        cout << *i;

    cout << endl;

    system("pause");
    return 0;
}