#include<iostream>
using namespace std;
int main()
{
	int N,M,a[1000][2],b[1000][2],c,d;
	cin>>N>>M;
	for(int i=0;i<N+M;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<N+M;i++)
	{
		for(int j=0;j<N+M;j++)
		{
			if(a[i][0]<a[j][0])
			{
				c=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=c;
				d=a[i][1];
				a[i][1]=a[j][1];
				a[j][1]=d;
			}
		}
	}
	for(int i=0;i<N+M;i++)
	{
		cout<<a[i][0]<<' '<<a[i][1]<<endl;
	}
	return 0;
} 
