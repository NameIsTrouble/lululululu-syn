#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    switch (n % 3 == 0 && n % 5 == 0)
    {
        case 1:
            cout << "Yes!" << endl;
            break;

        default:
            cout << "No!" << endl;
    }

    return 0;
}