#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	int a[31][31];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			a[0][0]=1;
			for(int j=0;j<=i;j++)
			{
				if(j==0)
				{
					a[i][j]=1;
				}
				else if(j==i)
				{
					a[i][j]=1;
				}
				else
				{
					a[i][j]=a[i-1][j-1]+a[i-1][j];
				}
				
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if(j==0)
				{
					if(i==0)
					{
						cout<<1<<endl;
					}
					else
					{
						cout<<1<<' ';
					}
				}
				else if(j==i)
				{
					cout<<1<<endl;
				}
				else
				{
					cout<<a[i][j]<<' ';
				}
			}
		}
		cout<<endl;
	}
	return 0;
 } 
