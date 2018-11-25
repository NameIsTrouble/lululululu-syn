/*
    水题 
*/
#include<iostream>
using namespace std;
int main()
{
    string num;
    cin>>num;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]=='9'&&i==0)
        {
            continue;
        }
        if(num[i]>'4')
        {
            num[i]='9'-num[i]+'0';
        }
    }
    cout<<num<<endl;
    system("pause");
    return 0;
}