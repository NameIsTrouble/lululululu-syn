#include<iostream>
using namespace std;
int main()
{
	int a[1000];
	for(int i=0;i<20;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<20;i++)
	{
		for(int j=0;i!=j&&j<20;j++)
		{
			if(a[i]%a[j]==0)
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
