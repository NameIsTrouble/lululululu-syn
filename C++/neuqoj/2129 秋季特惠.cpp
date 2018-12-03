#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,n,w;
        cin>>k>>n>>w;
        if(k*((w*w+w)/2)<=n)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<k*((w*w+w)/2)-n<<endl;
        }
    }
    system("pause");
    return 0;
}