/*
    水题
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>21||n<=10)
    {
        cout<<0<<endl;
    }
    else if(n==21||n==11)
    {
        cout<<4<<endl;
    }
    else
    {
        switch(n)
        {
            case 12:cout<<4<<endl;break;
            case 13:cout<<4<<endl;break;
            case 14:cout<<4<<endl;break;
            case 15:cout<<4<<endl;break;
            case 16:cout<<4<<endl;break;
            case 17:cout<<4<<endl;break;
            case 18:cout<<4<<endl;break;
            case 19:cout<<4<<endl;break;
            case 20:cout<<15<<endl;break;
        }
    }
    system("pause");
    return 0;
}