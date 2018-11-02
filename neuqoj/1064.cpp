#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
			b[j][i]=a[i][j];
		}
	}
	for(int n=0;n<3;n++)
	{
		for(int m=0;m<3;m++)
		{
			cout<<b[n][m]<<' ';
		}
		cout<<endl;
	}
	return 0;
 } 
