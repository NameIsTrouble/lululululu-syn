/*
    水题
*/
#include <iostream>
#include <string.h>

using namespace std;

int N, Temp[1005];

int main()
{
    cin >> N;
    memset(Temp, 0, sizeof(Temp));

    while (N--)
    {
        int TeamNo, MateNo, grade;
        scanf("%d-%d", &TeamNo, &MateNo);
        cin >> grade;
        Temp[TeamNo] += grade;
    }

    int max = 0, mark;
    for (int i = 1; i <= 1000; i++)
    {
        if(Temp[i] > max)
        {
            max = Temp[i];
            mark = i;
        }
    }
    cout << mark << " " << Temp[mark] << endl;
    system("pause");
    return 0;
}