/*
    打表就完事了
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<long long> UglyNum;
    UglyNum.insert(1);
    int count = 0;
    set<long long>::iterator it = UglyNum.begin();
    while (1)
    {
        UglyNum.insert((*it) * 2);
        UglyNum.insert((*it) * 3);
        UglyNum.insert((*it) * 5);
        count++;
        if(count==1500)
        break;
        it++;
    }
    set<long long>::iterator i;
    count = 0;
    for (i = UglyNum.begin(); i != UglyNum.end(); i++)
    {
        count++;
        if (count == 1500)
            cout << "The 1500'th ugly number is " << *i << "." << endl;
    }
    system("pause");
    return 0;
}