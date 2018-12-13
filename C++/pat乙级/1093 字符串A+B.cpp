#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<char>prf;
    int ch;
    while((ch=getchar())!='\n')
    {
        prf.insert(ch);
    }
    while((ch=getchar())!='\n')
    {
        prf.insert(ch);
    }
    set<char>::iterator it;
    for(it=prf.begin();it!=prf.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    system("pause");
    return 0;
}