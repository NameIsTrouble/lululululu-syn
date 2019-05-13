#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int n,test[100005];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int t;
    scanf("%d",&t);
    //cin>>t;
    for(int q=1;q<=t;q++)
    {
        memset(test,0,sizeof(test));
        //cin>>n;
        scanf("%d",&n);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&test[i]);
            //cin>>test[i];
            sum+=test[i];
        }
        sort(test,test+n,cmp);
        for(int i=3;i<=n;i+=3)
        {
            sum-=test[i-1];
        }
        cout<<"Case #"<<q<<": "<<sum<<endl;
    }
    system("pause");
    return 0;
}