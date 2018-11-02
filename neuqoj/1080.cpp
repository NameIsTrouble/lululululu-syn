#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100000],c[10000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int i=0,j=n-m;i<m;i++,j++)
	{
		c[i]=a[j];
	}
	for(int i=m,j=0;i<n;i++,j++)
	{
		c[i]=a[j];
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<' ';
	}
	return 0;
}
