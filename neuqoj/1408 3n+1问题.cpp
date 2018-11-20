#include<iostream>
using namespace std;
int main()
{
	int T,a[110];
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=T;i++)
	{
		for(int stp=0;;)
		{
			if(a[i]==1)
			{
				cout<<stp;
				break;
			}
			if(a[i]%2==0)
			{
				a[i]/=2;
				stp++;
			}
			else
			{
				a[i]=3*a[i]+1;
				stp++;
			}
		}
		cout<<endl;
	}
	return 0;
}