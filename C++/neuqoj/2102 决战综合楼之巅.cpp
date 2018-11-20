#include <iostream>
using namespace std;
int main()
{
    int ta, tb, na, nb;
    string naa, nab;
    cin >> naa >> na >> ta;
    cin >> nab >> nb >> tb;
    if (na > nb)
    {
        cout << naa;
    }
    else if (na < nb)
    {
        cout << nab;
    }
    else
    {
        if (ta > tb)
        {
            cout << nab;
        }
        else if (ta < tb)
        {
            cout << naa;
        }
        else
        {
            cout << "Oops!";
        }
    }
    return 0;
}