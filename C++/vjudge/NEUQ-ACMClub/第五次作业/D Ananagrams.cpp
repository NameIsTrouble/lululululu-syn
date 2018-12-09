#include<iostream>
#include<map>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    map<string,int> word;
    string test;
    scanf("%[^#]",&test);
    stringstream ss(test);
    string buf;
    while(ss>>buf)
    {
        cout<<buf<<endl;
    }
    system("pause");
    return 0;
}