#include<iostream>
using namespace std;
int main()
{
	int maxn,minn,max,min,a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	maxn=0;
	for(int j=0;j<10;j++)
	{
		if(max<a[j])
		{
			max=a[j];
			maxn=j;
		}
	}
	min=a[0];
	minn=0;
	for(int j=0;j<10;j++)
	{
		if(min>a[j])
		{
			min=a[j];
			minn=j;
		}
	}
	a[maxn]=a[9];
	a[9]=max;
	a[minn]=a[0];
	a[0]=min;
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}
