/*
    快速幂和数学
*/
#include<bits/stdc++.h>
using namespace std;
//构建快速幂
long long int mul(long long a,long long b)
{
    long long ans=1,base=a;
    while(b)
    {
        if(b%2)
        {
            ans*=base;
            ans%=1000;
        }
        base=((base%1000)*(base%1000))%1000;
        base%=1000;
        b/=2;
    }
    return ans;//返回后三位
}
int main()
{
    int t,count=1;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long least=mul(n,k);
        double fir=pow(10,k*log10(n)+2-int(k*log10(n)));//数学计算
        cout<<"Case "<<count<<": "<<int(fir)<<" "<<setw(3)<<setfill('0')<<least<<endl;//注意后三位的前导零
        count++;
    }
    system("pause");
    return 0;
}
/*
    关于前三位的数学计算
    假设前三位为 abc  那么n^k可表示为 a.bc..*10^m
    即 lg a.bc..+m==k*lg n
    a.bc..==pow(10,k*lg n-m)
    由于a<9那么lg a.bc..<1 即lg a.bc..为k*lg n的小数部分 m为整数部分
    那么可以得到a.bc..=pow(10,k*lg n-int(k*lg n))
    abc...=a.bc..*100
    abc=int(a.bc..*100)
*/