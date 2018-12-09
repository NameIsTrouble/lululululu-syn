/*
    规律
    除去第i个蓝球需要2^(i-1)步
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    //cin >> n;
    string test;
    cin>>test;
    //scanf("%s",test);
    //cin >> test;
    /*int sum=0;
    
    while(1)
    {
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(test[i] != 'R')
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            int i;
            for( i = 0; i < n; i++)
            {
                if(test[i] == 'R')
                {
                    test[i] = 'B';
                }
                else
                {
                    test[i] = 'R';
                    break;
                }
            }
            sum++;
        }
        else
        {
            break;
        }
    }*/
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        if(test[i]=='B')
        {
            sum+=pow(2,i);
        }
    }
    cout<<sum<<endl;
    //cout<<sum<<endl;
    system("pause");
    return 0;
}