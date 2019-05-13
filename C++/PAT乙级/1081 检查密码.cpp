/*
    水题
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar(); //这行不要删 有用

    while (n--)
    {
        string password;
        getline(cin, password); //输入可能有空格

        if (password.size() < 6)
            cout << "Your password is tai duan le.\n";
        else
        {
            bool digit = false, letter = false, islegal = true;

            for (int i = 0; i < password.size(); i++)
                if (isalpha(password[i]))
                    letter = true;
                else if (isdigit(password[i]))
                    digit = true;
                else if (password[i] != '.')
                {
                    islegal = false;
                    break;
                }

            if (digit && letter && islegal)
                cout << "Your password is wan mei.\n";
            else if (digit && !letter && islegal)
                cout << "Your password needs zi mu.\n";
            else if (!digit && letter && islegal)
                cout << "Your password needs shu zi.\n";
            else
                cout << "Your password is tai luan le.\n";
        }
    }

    system("pause");
    return 0;
}