#include <iostream>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m && n != -1 && m != -1)
    {
        int infor;
        while (1)
        {
            infor = n % m;
            n = m;
            if (!infor)
            {
                break;
            }
            m = infor;
        }
        if (m == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "POOR Haha" << endl;
        }
    }
    system("pause");
    return 0;
}