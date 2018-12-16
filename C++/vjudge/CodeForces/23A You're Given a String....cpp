/*
    暴力查找即可
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test;
    int l,max=0;
    cin>>test;
    for(int i=0;i<test.size();i++)
    {
        for(int j=i+1;j<test.size();j++)
        {
            l=0;
            while(test[i+l]==test[j+l])
            {
                l++;
            }
            if(l>max)
            {
                max=l;
            }
        }
    }
    cout<<max<<endl;
    system("pause");
    return 0;
}