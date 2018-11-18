#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,test[110];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>test[i];
    }
    sort(test,test+n);

}
//贪心