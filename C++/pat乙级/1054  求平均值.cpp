/*
    水题
*/
#include <iostream>
#include <string>

using namespace std;

bool IsLegal(string a)
{
    int dot_num = 0, ldigit_num = 0;
    for (int i = 0; i < a.size(); ++i)
        if (!isdigit(a[i]) && a[i] != '.' && a[i] != '-')
            return false;
        else if (a[i] == '.')
        {
            dot_num++;
            if (dot_num > 1)
                return false;
        }
        else if (dot_num)
        {
            ldigit_num++;
            if (ldigit_num > 2)
                return false;
        }
        else if (stod(a) > 1000 || stod(a) < -1000)
            return false;

    return true;
}

int main()
{
    int N, num = 0;
    double sum = 0;
    cin >> N;

    while (N--)
    {
        string temp;
        cin >> temp;
        if (!IsLegal(temp))
            cout << "ERROR: " << temp << " is not a legal number\n";
        else
        {
            sum += stod(temp);
            num++;
        }
    }

    if (!num)
        cout << "The average of 0 numbers is Undefined\n";
    else if (num == 1)
        printf("The average of 1 number is %.2lf\n", sum);
    else
        printf("The average of %d numbers is %.2lf\n", num, sum / num);

    system("pause");
    return 0;
}