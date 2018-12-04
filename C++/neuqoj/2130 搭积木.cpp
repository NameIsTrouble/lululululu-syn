/*
    我们从左向右推进，如果右侧的那一列比左侧的这一列高，显然我们需要放一些积木来满足
    右侧的高度，而如果右侧比左侧低，可以什么都不做。
*/
//注意sum大小
#include<iostream>
using namespace std;
int main()
{
    int n,h[500001],last=0;
    long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        if(last<h[i])
        {
            sum+=h[i]-last;
        }
        last=h[i];
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}