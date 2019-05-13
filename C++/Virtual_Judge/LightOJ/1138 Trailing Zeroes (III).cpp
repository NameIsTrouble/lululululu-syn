/*
    二分查找
    由于寻找后导0 只有5*2*n可以使尾部为0
    因此查找一个数一直除以5是否等于要求的尾部0个数即可
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=1;
    while(t--)
    {
        long long q;
        cin>>q;
        long long l=0,r=5*q,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            long long exc=0;
            long long rec=mid; 
            while(rec)
            {
                exc+=rec/5;
                rec/=5;
            }
            if(exc>q)
            {
                r=mid-1;
            }
            else if(exc<q)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        long long prf=0,rec=l;
        while(rec)
        {
            prf+=rec/5;
            rec/=5;
        }
        if(prf==q)
        {
            cout<<"Case "<<count<<": "<<l<<endl;
        }
        else
        {
            cout<<"Case "<<count<<": impossible"<<endl;
        }
        count++;
    }
    system("pause");
    return 0;
}