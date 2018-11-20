#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum=a[0][0]+a[1][1]+a[2][2];
	cout<<sum;
	return 0;
}
