#include<iostream>
using namespace std;
int main()
{
	int n,t[1000],d[1000];
	while(cin>>n)
	{
		if(n==0)
		{
			return 0;
		}
		for(int i=0;i<n;i++)
		{
			cin>>t[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>d[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(t[i]<t[j])
				{
					int c=t[i];
					t[i]=t[j];
					t[j]=c;
				}
				if(d[i]<d[j])
				{
					int a=d[i];
					d[i]=d[j];
					d[j]=a;
				}
			}
		}
		int count=0;
		for(int i=0,j=0;i<n;i++)
		{
			if(t[i]>d[j])
			{
				j++;
				count++;
			}
		}
		if(count>n/2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
