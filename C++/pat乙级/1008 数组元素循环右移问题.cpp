#include<iostream>
using namespace std;
int main()
{
	int move[1000]={0};
	int n,m;
	cin>>n>>m;
	m%=n;
	for(int i=0;i<n;i++)
	{
		cin>>move[i];
	}
	for(int i=m+n-1;i>=m-1;i--)
	{
		move[i]=move[i-m];
	}
	for(int i=0;i<m;i++)
	{
		move[i]=move[i+n];
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<move[i]<<' ';
	}
	cout<<move[n-1];
	return 0;
}
