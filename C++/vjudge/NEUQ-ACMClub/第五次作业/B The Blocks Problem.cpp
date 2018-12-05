#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> blocks(n);
    for(int i=0;i<n;i++)
    {
        blocks[i].push_back(i);
    }
    int count=n;
    while(count--)
    {
        string a,b;
        int sta,en;
        cin>>a;
        if(a=="quit")
        {
            break;
        }
        cin>>sta>>b>>en;
        if(a=="move"&&b=="onto")
        {
            
        }
        else if(a=="move"&&b=="over")
        {

        }
        else if(a=="pile"&&b=="onto")
        {

        }
        else if(a=="pile"&&b=="over")
        {

        }
    }
}