#include<bits/stdc++.h>
using namespace std;
bool isprimer[10000005];
vector<int>primer;
void print()
{
    memset(isprimer,true,sizeof(isprimer));
    isprimer[0]=false;
    isprimer[1]=false;
    for(int i=2;i<=10000005;i++)
    {
        if(isprimer[i])
        {
            primer.push_back(i);
            for(int j=i+i;j<=10000005;j+=i)
            {
                isprimer[j]=false;
            }
        }
    }
}
int main()
{
    print();
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cout<<1<<" "; 
    }
    cout<<n<<endl;
    system("pause");
    return 0;
}