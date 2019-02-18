/*
    水题
*/
#include <iostream>
#include <string>//getline();

using namespace std;

int main()
{
    int n;
    string CorPas, cP;
    int num = 0;
    cin >> CorPas;
    cin >> n;
    getchar();//这行不要删 有用
    while (1)
    {
        getline(cin, cP);
        if (cP == "#")
        {
            break;
        }
        if (cP == CorPas)
        {
            cout << "Welcome in\n";
            break;
        }
        else
        {
            num++;
            cout << "Wrong password: " << cP << endl; 
        }
        if (num == n)
        {
            cout << "Account locked\n";
            break;
        }
    }

    system("pause");
    return 0;
}