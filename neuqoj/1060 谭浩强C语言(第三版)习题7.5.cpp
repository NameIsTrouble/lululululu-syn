#include<iostream>
using namespace std;
int main()
{
	int a[11];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=9;i>0;i--)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[0];
	return 0;
 } 
