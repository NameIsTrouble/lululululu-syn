#include<iostream>
using namespace std;
int main()
{
	int a[11];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(a[i]<a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
