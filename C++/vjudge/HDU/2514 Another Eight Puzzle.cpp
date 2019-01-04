#include<bits/stdc++.h>
using namespace std;
bool judge[9];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(judge,true,sizeof(judge));
        for(int i=0;i<8;i++)
        {
            int x;
            cin>>x;
            judge[x]=false;
        }
    }
}