/*
    大水题
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<1;
            if(i!=n-1)
            {
                cout<<' ';
            }
            else
            {
                cout<<endl;
            }
        }
    }
    system("pause");
    return 0;
}