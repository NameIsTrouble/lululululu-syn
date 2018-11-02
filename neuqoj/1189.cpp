#include<iostream>
#include<cstring>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int l;
	while(cin>>l)
	{
		if(l==0)
		{
			return 0;
		}
		int a[1000],b[1000];
		int t;
		for(int i=0;getchar()!='\n';i++)
		{
			cin>>a[i];
			t=i+1;
		}
		int c;
		for(int i=0;i<t;i++)
		{
			
			for(int j=0;j<t;j++)
			{
				if(abs(a[i])>abs(a[j]))
				{
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}
			}
		}
		for(int i=0;i<t-1;i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<a[t-1]<<endl;
	}
	return 0;
}
