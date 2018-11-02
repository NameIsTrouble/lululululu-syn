#include<iostream>
using namespace std;
int main()
{
	int n,b,a[100];
	for(int i=0;i<9;i++)
	{
		cin>>a[i];
	}
	cin>>b;
	if(b>a[8])
		{
		a[9]=b;
		for(int j=0;j<=9;j++)
		{
			cout<<a[j]<<endl;
		}
	}
	else if(b<a[0])
	{
		for(int j=9;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=b;
		for(int q=0;q<=9;q++)
		{
			cout<<a[q]<<endl;
		}
	}
	else
	{
		for(int i=0;i<9;i++)
		{
			if(b>a[i]&&b<a[i+1])
			{
				for(int j=9;j>i+1;j--)
				{
					a[j]=a[j-1];
				}
				a[i+1]=b;
				for(int q=0;q<=9;q++)
				{
					cout<<a[q]<<endl;
				}
				return 0;
			}
		}
	}
	return 0;
}
