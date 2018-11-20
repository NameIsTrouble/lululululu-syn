#include<iostream>
using namespace std;
int main()
{
	int a[100],b;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	for(int i=0;i<9;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[9];
	return 0;
}
