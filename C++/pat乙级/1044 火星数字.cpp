#include <iostream>
#include <math.h>
#include <cstring>
#include <map>

using namespace std;

map<char, string> fir, sec;

void giveval()
{
    fir['1'] = "jan";
    fir['2'] = "feb";
    fir['3'] = "mar";
    fir['4'] = "apr";
    fir['5'] = "may";
    fir['6'] = "jun";
    fir['7'] = "jly";
    fir['8'] = "aug";
    fir['9'] = "sep";
    fir['9' + 1] = "otc";
    fir['9' + 2] = "nov";
    fir['9' + 3] = "dec";
    sec['1'] = "tam";
    sec['2'] = "hel";
    sec['3'] = "maa";
    sec['4'] = "huh";
    sec['5'] = "tou";
    sec['6'] = "kes";
    sec['7'] = "hei";
    sec['8'] = "elo";
    sec['9'] = "syy";
    sec['9' + 1] = "lok";
    sec['9' + 2] = "mer";
    sec['9' + 3] = "jou";
}

int main()
{
    giveval();

    int N;
    cin >> N;

    while (N--)
    {
        
    }

    system("pause");
    return 0;
}