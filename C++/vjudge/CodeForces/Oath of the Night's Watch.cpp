#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,max=-1,count_max=0,count_min=0;
    cin>>n;
    long long *a=new long long [n];
    long long min=10000000001;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int long long i=0;i<n;i++)
    {
        if(a[i]==a[0])
        {
            count_min++;
        }
        else if(a[i]==a[n-1])
        {
            count_max++;
        }
    }
    delete[] a;
    printf("%lld\n",n-count_max-count_min);
    system("pause");
    return 0;
}